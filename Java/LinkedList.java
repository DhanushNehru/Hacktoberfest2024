
import java.util.Scanner;

import static java.lang.System.exit;

public class LinkedList {
    Node root;

    public static class Node {
        int data;
        Node next;

        Node(int val) {
            data = val;
            next = null;
        }
    }

    public static void print(LinkedList list) {
        if (list.root == null) {
            System.out.println("No Nodes Are Present");
        } else {
            Node current = list.root;
            while (current.next != null) {
                System.out.print(current.data + "->");
                current = current.next;
            }
            System.out.print(current.data);
            System.out.println("");
        }
    }

    public static LinkedList inserAtBeg(LinkedList list, int val) {
        Node newnode = new Node(val);
        if (list.root == null) {
            list.root = newnode;
        } else {
            newnode.next = list.root;
            list.root = newnode;
        }
        return list;
    }

    public static LinkedList insertAtEnd(LinkedList list, int val) {
        Node newnode = new Node(val);
        if (list.root == null) {
            list.root = newnode;
        } else {
            Node current = list.root;
            while (current.next != null) {
                current = current.next;
            }
            current.next = newnode;
        }
        return list;
    }

    public static LinkedList insertAtSpe(LinkedList list, int val, int position) {
        if (list.root == null) {
            System.out.println("Cannot be inserted");
        } else {
            boolean positionFound = false;
            Node newnode = new Node(val);
            Node current = list.root;
            while (current != null) {
                if (current.data == position) {
                    newnode.next = current.next;
                    current.next = newnode;
                    positionFound = true;
                    System.out.println("Node inserted after position: " + position);
                    break;
                }
                current = current.next;
            }
            if (!positionFound) {
                System.out.println("Position " + position + " not found in the list.");
            }
        }
        return list;
    }

    public static LinkedList deleteatBeg(LinkedList list) {
        if (list.root == null) {
            System.out.println("Nothing to delete");
        } else {
            list.root = list.root.next;
        }
        return list;
    }

    public static LinkedList deleteatEnd(LinkedList list) {
        if (list.root == null) {
            System.out.println("Nothing to delete");
        } else {
            Node curr = list.root;
            Node prev = null;
            while (curr.next != null) {
                prev = curr;
                curr = curr.next;
            }
            prev.next = null;
        }
        return list;
    }

    public static LinkedList deleteAtSpec(LinkedList list, int val) {
        if (list.root == null) {
            System.out.println("Nothing to delete");
        } else {
            Node curr = list.root;
            Node prev = null;
            while (curr != null) {
                if (curr.data == val) {
                    prev.next = curr.next;
                    return list;
                }
                prev = curr;
                curr = curr.next;
            }
        }
        System.out.println("Value not found in the list");
        return list;
    }

    public static void main(String[] args) {
        LinkedList list = new LinkedList();
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
                    inserAtBeg(list, val);
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
