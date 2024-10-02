import java.util.Scanner;

import static java.lang.System.exit;

public class DoubleLinkedList {
    Node root;

    public static class Node {
        int data;
        Node prev;
        Node next;

        Node(int val) {
            data = val;
            prev = null;
            next = null;
        }
    }

    public static DoubleLinkedList iab(DoubleLinkedList list, int val) {
        Node newnode = new Node(val);
        if (list.root == null) {
            list.root = newnode;
        } else {
            list.root.prev = newnode;
            newnode.next = list.root;
            list.root = newnode;
        }
        return list;
    }

    public static void print(DoubleLinkedList list) {
        if (list.root == null) {
            System.out.println("List is Empty");
        } else {
            Node curr = list.root;
            while (curr.next != null) {
                System.out.print(curr.data + "->");
                curr = curr.next;
            }
            System.out.print(curr.data + "->" + "Null");
            System.out.println("");
        }
    }

    public static DoubleLinkedList insertAtEnd(DoubleLinkedList list, int val) {
        Node newnode = new Node(val);
        if (list.root == null) {
            list.root = newnode;
        } else {
            Node curr = list.root;
            while (curr.next != null) {
                curr = curr.next;
            }
            curr.next = newnode;
            newnode.prev = curr.next;
        }
        return list;
    }

    public static DoubleLinkedList insertAtSpe(DoubleLinkedList list, int val, int pos) {
        if (list.root == null) {
            System.out.println("Cannot insert at position as list is empty");
        } else {
            boolean found = false;
            Node newnode = new Node(val);
            Node curr = list.root;
            while (curr != null) {
                if (curr.data == pos) {
                    newnode.prev = curr.next;
                    newnode.next = curr.next.next;
                    curr.next.prev = newnode;
                    curr.next = newnode;
                    found = true;
                }
                curr = curr.next;
            }
            if (!found) {
                System.out.println("Position is not present");
            }
        }
        return list;
    }

    public static DoubleLinkedList deleteatBeg(DoubleLinkedList list) {
        if (list.root == null) {
            System.out.println("List is Empty");
        } else {
            Node curr = list.root;
            list.root = curr.next;
            list.root.prev = null;
        }
        return list;
    }

    public static DoubleLinkedList deleteatEnd(DoubleLinkedList list) {
        if (list.root == null) {
            System.out.println("Nothing to delete list is empty");
        } else {
            Node curr = list.root;
            while (curr.next != null) {
                curr = curr.next;
            }
            curr.prev.next = null;
        }
        return list;
    }

    public static DoubleLinkedList deleteAtSpec(DoubleLinkedList list, int pos) {
        if (list.root == null) {
            System.out.println("Nothing to delete list is empty");
        } else {
            boolean isFound = false;
            Node curr = list.root;
            while (curr != null) {
                if (curr.data == pos) {
                    curr.prev.next = curr.next;
                    curr.next.prev = curr.prev;
                    isFound = true;
                    break;
                }
                curr = curr.next;
            }
            if (isFound == false) {
                System.out.println("Didnt found the value");
            }
        }
        return list;
    }

    public static void main(String[] args) {
        DoubleLinkedList list = new DoubleLinkedList();
        int val, pos;
        Scanner input = new Scanner(System.in);
        System.out.println("1.iab" + "\n" + "2.iae" + "\n" + "3.ias" + "\n"
                + "4.print" + "\n" + "5.dab" + "\n" + "6.dae" + "\n" + "7.das" + "\n" + "8.exit");
        while (true) {
            System.out.println("Enter your Choice: ");
            int choice = input.nextInt();
            switch (choice) {
                case 1:
                    System.out.println("Enter the choice: ");
                    val = input.nextInt();
                    iab(list, val);
                    break;
                case 2:
                    System.out.println("Enter the choice: ");
                    val = input.nextInt();
                    insertAtEnd(list, val);
                    break;
                case 3:
                    System.out.println("Enter the choice: ");
                    val = input.nextInt();
                    System.out.println("Enter the position: ");
                    pos = input.nextInt();
                    insertAtSpe(list, val, pos);
                    break;
                case 4:
                    print(list);
                    break;
                case 5:
                    deleteatBeg(list);
                    break;
                case 6:
                    deleteatEnd(list);
                    break;
                case 7:
                    System.out.println("Enter the position: ");
                    pos = input.nextInt();
                    deleteAtSpec(list, pos);
                    break;
                case 8:
                    System.out.println("Exiting program.");
                    exit(0);
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }
    }
}
