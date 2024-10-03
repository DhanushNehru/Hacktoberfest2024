import numpy as np

class NaiveBayes:
    def __init__(self):
        self.classes = None
        self.class_prior = {}
        self.conditional_prob = {}
    
    def fit(self, X, y):
        """Train the Naive Bayes classifier using training data X and labels y."""
        n_samples, n_features = X.shape
        self.classes = np.unique(y)
        
        for c in self.classes:
            X_c = X[y == c]
            self.class_prior[c] = X_c.shape[0] / n_samples
            self.conditional_prob[c] = {}
            
            for j in range(n_features):
                feature_values = np.unique(X[:, j])
                self.conditional_prob[c][j] = {}
                
                for value in feature_values:
                    self.conditional_prob[c][j][value] = (X_c[:, j] == value).sum() / X_c.shape[0]

    def predict(self, X):
        """Predict the class labels for input data X."""
        predictions = [self._predict_instance(x) for x in X]
        return np.array(predictions)
    
    def _predict_instance(self, x):
        """Predict the class for a single instance x."""
        posteriors = []
        
        for c in self.classes:
            prior = np.log(self.class_prior[c])
            likelihood = 0
            
            for j in range(len(x)):
                value = x[j]
                if value in self.conditional_prob[c][j]:
                    likelihood += np.log(self.conditional_prob[c][j][value])
                else:
                    likelihood += np.log(1e-6)
            
            posteriors.append(prior + likelihood)
        
        return self.classes[np.argmax(posteriors)]

if __name__ == "__main__":
    X_train = np.array([
        [1, 0],
        [1, 1],
        [0, 0],
        [0, 1],
        [1, 0]
    ])
    
    y_train = np.array([1, 1, 0, 0, 1])
    
    X_test = np.array([
        [1, 0],
        [0, 1]
    ])
    
    nb = NaiveBayes()
    
    nb.fit(X_train, y_train)
    
    predictions = nb.predict(X_test)
    
    print("Predictions:", predictions)
