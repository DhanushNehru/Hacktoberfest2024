class TrieNode:
    def __init__(self):
        self.children = {}
        self.is_end_of_word = False

class Trie:
    def __init__(self):
        self.root = TrieNode()

    def insert(self, word: str) -> None:
        """Inserts a word into the trie."""
        node = self.root
        for char in word:
            if char not in node.children:
                node.children[char] = TrieNode()
            node = node.children[char]
        node.is_end_of_word = True

    def search(self, word: str) -> bool:
        """Searches for a word in the trie."""
        node = self.root
        for char in word:
            if char not in node.children:
                return False
            node = node.children[char]
        return node.is_end_of_word

    def starts_with(self, prefix: str) -> bool:
        """Checks if there is any word in the trie that starts with the given prefix."""
        node = self.root
        for char in prefix:
            if char not in node.children:
                return False
            node = node.children[char]
        return True

    def delete(self, word: str) -> bool:
        """Deletes a word from the trie. Returns True if the word was successfully deleted."""
        def _delete(node: TrieNode, word: str, depth: int) -> bool:
            if not node:
                return False

            # Base case: if we have reached the end of the word
            if depth == len(word):
                if node.is_end_of_word:
                    node.is_end_of_word = False
                    return len(node.children) == 0  # True if node is now a leaf node
                return False

            char = word[depth]
            if char in node.children:
                should_delete_current_node = _delete(node.children[char], word, depth + 1)

                if should_delete_current_node:
                    del node.children[char]
                    return len(node.children) == 0  # True if node is now a leaf node

            return False

        return _delete(self.root, word, 0)

    def get_words_with_prefix(self, prefix: str) -> list:
        """Returns a list of all words in the trie that start with the given prefix."""
        def _find_words(node: TrieNode, path: str, words: list) -> None:
            if node.is_end_of_word:
                words.append(path)
            for char, child in node.children.items():
                _find_words(child, path + char, words)

        node = self.root
        for char in prefix:
            if char not in node.children:
                return []
            node = node.children[char]

        words = []
        _find_words(node, prefix, words)
        return words

# Example usage
if __name__ == "__main__":
    trie = Trie()
    trie.insert("apple")
    trie.insert("app")
    trie.insert("bat")
    trie.insert("ball")

    print(trie.search("apple"))  # True
    print(trie.search("app"))    # True
    print(trie.search("bat"))    # True
    print(trie.search("ba"))     # False
    print(trie.starts_with("ba")) # True
    print(trie.get_words_with_prefix("ba")) # ['bat', 'ball']

    trie.delete("app")
    print(trie.search("app"))     # False
    print(trie.get_words_with_prefix("ap")) # ['apple']
