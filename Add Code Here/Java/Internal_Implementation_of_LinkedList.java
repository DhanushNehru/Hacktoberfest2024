class Node {
  int data;
  Node next;

  public Node(int data) {
    this.data = data;
    this.next = null;
  }
}

class LinkedList {
  private Node head;

  public LinkedList() {
    this.head = null;
  }

  public void append(int data) {
    Node newNode = new Node(data);

    if (head == null) {
      head = newNode;
      return;
    }

    Node current = head;
    while (current.next != null) {
      current = current.next;
    }
    current.next = newNode;
  }

  public void prepend(int data) {
    Node newNode = new Node(data);
    newNode.next = head;
    head = newNode;
  }

  public void delete(int data) {
    if (head == null) {
      System.out.println("List is empty.");
      return;
    }
    if (head.data == data) {
      head = head.next;
      return;
    }

    Node current = head;
    while (current.next != null && current.next.data != data) {
      current = current.next;
    }

    if (current.next == null) {
      System.out.println("Node not found.");
      return;
    }

    current.next = current.next.next;
  }

  public void display() {
    if (head == null) {
      System.out.println("List is empty.");
      return;
    }

    Node current = head;
    while (current != null) {
      System.out.print(current.data + " -> ");
      current = current.next;
    }
    System.out.println("null");
  }

  public boolean search(int data) {
    Node current = head;
    while (current != null) {
      if (current.data == data) {
        return true;
      }
      current = current.next;
    }
    return false;
  }
}

public class Internal_Implementation_of_LinkedList {
  public static void main(String[] args) {
    LinkedList list = new LinkedList();

    list.append(10);
    list.append(20);
    list.append(30);
    list.prepend(5);

    System.out.println("Linked List:");
    list.display(); // Output: 5 -> 10 -> 20 -> 30 -> null

    System.out.println("Deleting 20:");
    list.delete(20);
    list.display(); // Output: 5 -> 10 -> 30 -> null

    System.out.println("Searching 10:");
    System.out.println(list.search(10)); // Output: true

    System.out.println("Searching 50:");
    System.out.println(list.search(50)); // Output: false
  }
}
