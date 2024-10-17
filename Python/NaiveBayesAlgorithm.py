import numpy as np

class NaiveBayes:
    def __init__(self):
        self.prior_probs = {}
        self.conditional_probs = {}
        self.classes = []

    def fit(self, X, y):
        unique_classes, counts = np.unique(y, return_counts=True)
        total_samples = len(y)
        self.classes = unique_classes
        for c, count in zip(unique_classes, counts):
            self.prior_probs[c] = count / total_samples

        for feature_index in range(X.shape[1]):
            unique_values = np.unique(X[:, feature_index])
            for value in unique_values:
                self.conditional_probs[(feature_index, value)] = {}
                for c in unique_classes:
                    count = np.sum((X[:, feature_index] == value) & (y == c)) + 1
                    total_count = np.sum(y == c) + len(unique_values)
                    self.conditional_probs[(feature_index, value)][c]=count/total_count

    def predict(self, X):
        predictions = []
        for sample in X:
            max_prob = -1
            predicted_class = None
            for c in self.classes:
                prob = self.prior_probs[c]
                for feature_index, value in enumerate(sample):
                    if (feature_index, value) in self.conditional_probs:
                        prob *= self.conditional_probs[(feature_index, value)][c]
                    else:
                        prob*= 1/(np.sum([1 for key in self.conditional_probs.keys()\
                                             if key[0] == feature_index]) + 
                                     len(self.classes))
                if prob > max_prob:
                    max_prob = prob
                    predicted_class = c
            predictions.append(predicted_class)
        return predictions

# Example usage:
if __name__ == "__main__":
    # Example data
    X_train = np.array([
        ['sunny', 'hot', 'high', 'weak'],
        ['sunny', 'hot', 'high', 'strong'],
        ['overcast', 'hot', 'high', 'weak'],
        ['rain', 'mild', 'high', 'weak'],
        ['rain', 'cool', 'normal', 'weak'],
        ['rain', 'cool', 'normal', 'strong'],
        ['overcast', 'cool', 'normal', 'strong'],
        ['sunny', 'mild', 'high', 'weak'],
        ['sunny', 'cool', 'normal', 'weak'],
        ['rain', 'mild', 'normal', 'weak'],
        ['sunny', 'mild', 'normal', 'strong'],
        ['overcast', 'mild', 'high', 'strong'],
        ['overcast', 'hot', 'normal', 'weak'],
        ['rain', 'mild', 'high', 'strong']
    ])
    y_train = np.array(['no', 'no', 'yes', 'yes', 'yes', 'no', 'yes', 
                        'no', 'yes', 'yes', 'yes', 'yes', 'yes', 'no'])

    X_test = np.array([
        ['sunny', 'hot', 'normal', 'weak'],
        ['rain', 'mild', 'high', 'strong'],
        ['rain', 'cool', 'high', 'weak'],
        ['rain', 'mild', 'high', 'strong']
    ])

    nb_classifier = NaiveBayes()
    nb_classifier.fit(X_train, y_train)
    predictions = nb_classifier.predict(X_test)

    print("Predictions:", predictions)
