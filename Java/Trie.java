// Trie implementation in Java
import java.util.HashMap;

class TrieNode {
    // Each TrieNode contains a map of children and a boolean to indicate the end of a word
    HashMap<Character, TrieNode> children = new HashMap<>();
    boolean isEndOfWord = false;

    // Constructor
    public TrieNode() {}
}

public class Trie {
    private final TrieNode root;

    // Constructor to initialize the Trie with a root node
    public Trie() {
        root = new TrieNode();
    }

    // Method to insert a word into the Trie
    public void insert(String word) {
        TrieNode currentNode = root;
        
        // Traverse each character in the word
        for (char ch : word.toCharArray()) {
            // If the character is not present in the current node's children, add it
            currentNode.children.putIfAbsent(ch, new TrieNode());
            // Move to the next node
            currentNode = currentNode.children.get(ch);
        }

        // Mark the end of the word
        currentNode.isEndOfWord = true;
    }

    // Method to search if a word is present in the Trie
    public boolean search(String word) {
        TrieNode currentNode = root;

        // Traverse each character in the word
        for (char ch : word.toCharArray()) {
            // If the character is not present in the current node's children, return false
            if (!currentNode.children.containsKey(ch)) {
                return false;
            }
            // Move to the next node
            currentNode = currentNode.children.get(ch);
        }

        // Return true if we are at the end of the word and it is marked as a valid word
        return currentNode.isEndOfWord;
    }

    // Method to check if there is any word in the Trie that starts with the given prefix
    public boolean startsWith(String prefix) {
        TrieNode currentNode = root;

        // Traverse each character in the prefix
        for (char ch : prefix.toCharArray()) {
            // If the character is not present in the current node's children, return false
            if (!currentNode.children.containsKey(ch)) {
                return false;
            }
            // Move to the next node
            currentNode = currentNode.children.get(ch);
        }

        // Return true because the prefix is present in the Trie
        return true;
    }

    // Main method to test the Trie implementation
    public static void main(String[] args) {
        Trie trie = new Trie();

        // Insert words into the Trie
        trie.insert("apple");
        trie.insert("app");
        trie.insert("bat");

        // Search for words in the Trie
        System.out.println(trie.search("apple")); // Output: true
        System.out.println(trie.search("app"));   // Output: true
        System.out.println(trie.search("bat"));   // Output: true
        System.out.println(trie.search("batman")); // Output: false

        // Check if prefixes exist
        System.out.println(trie.startsWith("app")); // Output: true
        System.out.println(trie.startsWith("bat")); // Output: true
        System.out.println(trie.startsWith("cat")); // Output: false
    }
}
