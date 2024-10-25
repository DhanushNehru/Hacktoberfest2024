import numpy as np
import pandas as pd

class NaiveBayesClassifier:
    def __init__(self, smoothing=1):
        self.smoothing = smoothing
        self.class_priors = None
        self.conditional_probs = None

    def fit(self, X, y):
        """Fits the Naive Bayes model to the given data.

        Args:
            X: A NumPy array or pandas DataFrame representing the feature matrix.
            y: A NumPy array or pandas Series representing the target labels.
        """
        self.classes = np.unique(y)
        self.num_classes = len(self.classes)
        self.num_features = X.shape[1]

        # Calculate class priors
        self.class_priors = np.zeros(self.num_classes)
        for c in self.classes:
            self.class_priors[c] = np.sum(y == c) / len(y)

        # Calculate conditional probabilities
        self.conditional_probs = np.zeros((self.num_classes, self.num_features))
        for c in self.classes:
            X_c = X[y == c]
            for i in range(self.num_features):
                feature_values, counts = np.unique(X_c[:, i], return_counts=True)
                self.conditional_probs[c, i] = (counts + self.smoothing) / (np.sum(counts) + self.smoothing * len(feature_values))

    def predict(self, X):
        """Predicts the class labels for new data.

        Args:
            X: A NumPy array or pandas DataFrame representing the feature matrix of the new data.

        Returns:
            A NumPy array or pandas Series containing the predicted class labels.
        """
        log_probs = np.zeros((len(X), self.num_classes))
        for c in self.classes:
            log_probs[:, c] = np.log(self.class_priors[c]) + np.sum(np.log(self.conditional_probs[c, :] * X + (1 - self.conditional_probs[c, :]) * (1 - X)), axis=1)
        return self.classes[np.argmax(log_probs, axis=1)]

# Example usage
X = np.array([[1, 0, 1],
              [0, 1, 0],
              [1, 1, 1]])
y = np.array([0, 1, 0])

nb = NaiveBayesClassifier()
nb.fit(X, y)
predictions = nb.predict(X)
print(predictions)