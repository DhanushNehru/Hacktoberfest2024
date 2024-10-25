import java.util.PriorityQueue;
import java.util.HashMap;
import java.util.Map;

class HuffmanNode {
    int frequency;
    char character;
    HuffmanNode left;
    HuffmanNode right;

    public HuffmanNode(char character, int frequency) {
        this.character = character;
        this.frequency = frequency;
    }
}

class HuffmanCoding {
    public Map<Character, String> codes = new HashMap<>();

    public void buildHuffmanTree(String text) {
        Map<Character, Integer> frequencyMap = new HashMap<>();
        for (char c : text.toCharArray()) {
            frequencyMap.put(c, frequencyMap.getOrDefault(c, 0) + 1);
        }

        PriorityQueue<HuffmanNode> priorityQueue = new PriorityQueue<>((a, b) -> a.frequency - b.frequency);
        for (Map.Entry<Character, Integer> entry : frequencyMap.entrySet()) {
            priorityQueue.offer(new HuffmanNode(entry.getKey(), entry.getValue()));
        }

        while (priorityQueue.size() > 1) {
            HuffmanNode left = priorityQueue.poll();
            HuffmanNode right = priorityQueue.poll();
            HuffmanNode parent = new HuffmanNode('\0', left.frequency + right.frequency);
            parent.left = left;
            parent.right = right;
            priorityQueue.offer(parent);
        }

        buildCodes(priorityQueue.poll(), "");
    }

    private void buildCodes(HuffmanNode node, String code) {
        if (node.left == null && node.right == null) {
            codes.put(node.character, code);
            return;
        }
        buildCodes(node.left, code + "0");
        buildCodes(node.right, code + "1");
    }

    public String compress(String text) {
        StringBuilder compressed = new StringBuilder();
        for (char c : text.toCharArray()) {
            compressed.append(codes.get(c));
        }
        return compressed.toString();
    }

    public String decompress(String compressed) {
        StringBuilder result = new StringBuilder();
        HuffmanNode currentNode = null;
        for (char bit : compressed.toCharArray()) {
            currentNode = (currentNode == null) ? new HuffmanNode('\0', 0) : currentNode;
            if (bit == '0') {
                currentNode = currentNode.left;
            } else {
                currentNode = currentNode.right;
            }

            if (currentNode.left == null && currentNode.right == null) {
                result.append(currentNode.character);
                currentNode = null;
            }
        }
        return result.toString();
    }

    public static void main(String[] args) {
        HuffmanCoding huffmanCoding = new HuffmanCoding();
        String text = "hello huffman";
        huffmanCoding.buildHuffmanTree(text);
        String compressed = huffmanCoding.compress(text);
        String decompressed = huffmanCoding.decompress(compressed);

        System.out.println("Original Text: " + text);
        System.out.println("Compressed: " + compressed);
        System.out.println("Decompressed: " + decompressed);
    }
}
