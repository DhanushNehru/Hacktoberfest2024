import collections

class TimeMap:
    def __init__(self):
        # Initialize a dictionary to store the key-value pairs with timestamp
        self.store = collections.defaultdict(list)

    def set(self, key: str, value: str, timestamp: int) -> None:
        """
        Stores the key-value pair with a timestamp.
        :param key: Key to store.
        :param value: Value associated with the key.
        :param timestamp: The timestamp of the value.
        """
        self.store[key].append((timestamp, value))

    def get(self, key: str, timestamp: int) -> str:
        """
        Retrieves the most recent value for the key at or before the given timestamp.
        :param key: Key to retrieve.
        :param timestamp: The maximum timestamp allowed.
        :return: Value associated with the key or an empty string if no such value exists.
        """
        if key not in self.store:
            return ""

        # Perform binary search to find the correct value
        values = self.store[key]
        l, r = 0, len(values) - 1
        res = ""

        while l <= r:
            mid = (l + r) // 2
            if values[mid][0] <= timestamp:
                res = values[mid][1]
                l = mid + 1
            else:
                r = mid - 1

        return res

# Test Cases
kv = TimeMap()
kv.set("foo", "bar", 1)
print(kv.get("foo", 1))  # Output: "bar"
print(kv.get("foo", 3))  # Output: "bar"
kv.set("foo", "bar2", 4)
print(kv.get("foo", 4))  # Output: "bar2"
print(kv.get("foo", 5))  # Output: "bar2"
print(kv.get("foo", 0))  # Output: "" (No value before timestamp 1)
print(kv.get("baz", 1))  # Output: "" (No such key)
