import math
from collections import Counter

class Point:
    def __init__(self, x, y, label=None):
        self.x = x
        self.y = y
        self.label = label

    def distance(self, other):
        return math.sqrt((self.x - other.x) ** 2 + (self.y - other.y) ** 2)

def knn_classify(test_point, points, k):
    distances = [(point, test_point.distance(point)) for point in points]
    distances.sort(key=lambda x: x[1])
    nearest_neighbors = [point.label for point, _ in distances[:k]]
    return Counter(nearest_neighbors).most_common(1)[0][0]

points = [
    Point(1, 2, "A"),
    Point(2, 3, "A"),
    Point(3, 4, "B"),
    Point(6, 5, "B")
]

test_point = Point(3, 3)
k = 3
result = knn_classify(test_point, points, k)
print(f"The test point is classified as: {result}")
