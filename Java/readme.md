# 1.Stack Implementation using Deque

This project demonstrates how to implement a stack using `Deque` (Double-ended Queue) in Java, along with a comparison to the native `Stack` class.

## Code Structure

- **`Stackss` class**: Implements stack functionality using `Deque`.
  - `push(int data)`: Adds an element to the stack.
  - `pop()`: Removes the top element from the stack.
  - `peek()`: Returns the top element without removing it.
  - `isempty()`: Checks if the stack is empty.
  
- **`main` method**: 
  - Demonstrates the usage of `Stackss` and compares it with the native `Stack` class.

## Operations:

1. **Push**: Adds elements to the stack (using `deque.addLast()`).
2. **Pop**: Removes the top element (using `deque.removeLast()`).
3. **Peek**: Gets the top element without removing it (using `deque.getLast()`).
4. **isEmpty**: Checks if the stack is empty (using `deque.isEmpty()`).

## Example Usage

```java
Stackss s = new Stackss();
s.push(1);
s.push(2);
s.push(3);
while (!s.isempty()) {
    System.out.println(s.peek());
    s.pop();
}
```
# 2.Duplicate Parentheses Detection

This project provides an algorithm to detect duplicate parentheses in a given mathematical expression. Duplicate parentheses refer to unnecessary or redundant parentheses, for example, `((a+b))` has duplicates, while `(a+b)` does not.

## Problem Explanation

- **Duplicate Example**: `((a+b))` — contains duplicate parentheses.
- **Non-Duplicate Example**: `(a+b)` — does not contain any duplicates.

The goal is to return `true` if duplicate parentheses are detected and `false` otherwise.

## Approach

The algorithm utilizes a stack to keep track of characters in the string. As we iterate through the string:
1. If a closing parenthesis `)` is encountered, the stack is popped until an opening parenthesis `(` is found.
2. If no characters exist between the parentheses (i.e., `()` or `((a+b))`), the algorithm detects duplicates and returns `true`.
3. If characters exist between parentheses, continue to the next iteration.

## Code Explanation

### `isduplicate(String str)`

- **Input**: A string containing a mathematical expression.
- **Output**: Returns `true` if duplicate parentheses are found, otherwise returns `false`.
  
### Steps:
1. **Initialize a stack** to store characters of the string.
2. **Iterate through the string** character by character:
   - Push opening parentheses `(`, operators, and operands onto the stack.
   - When a closing parenthesis `)` is encountered, check the characters inside the parentheses.
   - If fewer than 1 character is found between the parentheses, duplicates are detected.
3. **Return** `true` if duplicates are found, otherwise `false`.

## Example Usage

```java
boolean result = isduplicate("(a+b)");  // False
if (result) {
    System.out.println("Duplicate exists");
} else {
    System.out.println("Duplicate does not exist");
}
```
# 3.Find Next Greater Element

This project provides an algorithm to find the next greater element (NGR) for each element in a given array. The next greater element for a given element in the array is the first element to the right that is greater than the current element. If no such element exists, the next greater element is `-1`.

## Problem Explanation

Given an array, for each element, find the next greater element. The next greater element for an element `x` is the first element to the right of `x` that is greater than `x`. If no such element exists, the result should be `-1`.

### Example:

- Input: `[6, 8, 0, 1, 3, 10]`
- Output: `[8, 10, 1, 3, 10, -1]`

## Approach

We use a **brute force approach** to find the next greater element:
1. Iterate through each element of the array.
2. For each element, look at all the elements to its right.
3. If an element greater than the current element is found, store it in the result array.
4. If no greater element is found, store `-1` in the result array.

### Code Explanation

### `findNextgrater(int[] arr, int[] ngr)`

- **Input**: 
  - `arr[]`: Array of integers for which we need to find the next greater element.
  - `ngr[]`: Array to store the next greater elements.
  
- **Output**: Populates the `ngr[]` array with the next greater elements or `-1` if no greater element is found.

### Steps:
1. **Iterate through each element** of the array.
2. For each element `arr[i]`, iterate through the elements to its right (i.e., `arr[j]` where `j > i`).
3. If a greater element `arr[j]` is found, store it in `ngr[i]`.
4. If no greater element is found, store `-1` in `ngr[i]`.

## Example Usage

```java
int arr[] = { 6, 8, 0, 1, 3, 10 };
int ngr[] = new int[arr.length];
findNextgrater(arr, ngr);
System.out.println(Arrays.toString(ngr)); // Output: [8, 10, 1, 3, 10, -1]
```
# 4.Queue Implementation Using Linked List

This project provides an implementation of a **Queue** using a singly linked list. The queue follows the **FIFO** (First-In, First-Out) principle, where elements are inserted from the rear and removed from the front.

## Problem Explanation

A queue is a data structure that follows the FIFO principle. In this implementation, a queue is constructed using a linked list where each element (node) contains data and a pointer to the next element in the list.

### Key Operations:

1. **Add (Enqueue)**: Adds an element to the rear (end) of the queue.
2. **Delete (Dequeue)**: Removes an element from the front of the queue.
3. **Peek**: Retrieves the element at the front of the queue without removing it.
4. **Is Empty**: Checks if the queue is empty.

## Approach

### Linked List Representation:

- **Node**: Each element in the queue is represented as a node in the linked list. Each node contains:
  - `data`: The value of the node.
  - `next`: A pointer to the next node in the list.

### Class Definitions:

1. **Node Class**:
   - Represents each node in the linked list.
   - Contains the `data` and `next` fields.

2. **Queue Class**:
   - Implements the queue using two pointers:
     - `head`: Points to the front of the queue.
     - `tail`: Points to the rear of the queue.

### Operations in the Queue Class:

- **isEmpty()**: Returns `true` if both `head` and `tail` are `null`, meaning the queue is empty.
  
- **add(int data)**: Adds a new node to the end of the queue.
  - If the queue is empty, the new node becomes both the head and the tail.
  - If the queue is not empty, the new node is added to the `tail`, and the `tail` pointer is updated.
  
- **del()**: Removes the node at the front of the queue and returns its data.
  - If the queue is empty, it returns `-1`.
  - If there's only one element, both `head` and `tail` are set to `null`.
  - Otherwise, `head` is updated to the next node in the list.
  
- **peek()**: Displays the data at the front of the queue without removing it.

## Example Code

```java
public class Q_Imp_Us_LL {

    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    static class Queue {
        static Node head = null;
        static Node tail = null;

        public boolean isEmpty() {
            return head == null && tail == null;
        }

        public void add(int data) {
            Node node = new Node(data);
            if (isEmpty()) {
                head = tail = node;
                return;
            }
            tail.next = node;
            tail = node;
        }

        public int del() {
            if (isEmpty()) {
                System.out.println("Queue is Empty.");
                return -1;
            }
            int result = head.data;
            if (head == tail) {
                head = tail = null;
            } else {
                head = head.next;
            }
            return result;
        }

        public void peek() {
            System.out.println("Peek " + head.data);
        }
    }

    public static void main(String[] args) {
        Queue q = new Queue();
        q.add(0);
        q.add(1);
        q.add(2);
        while (!q.isEmpty()) {
            q.peek();
            q.del();
        }
    }
}
```
# 5.First Non-Repeating Character in a Stream

This project implements an algorithm to find the **first non-repeating character** in a given string, dynamically as the string is processed. The code makes use of a **queue** and an array to track the frequency of characters.

## Problem Statement

Given a string, the task is to find the first non-repeating character at every step as you traverse the string. If no non-repeating character exists at a given step, output `-1`.

### Example:

For the input `"aabxccbx"`, the output will be:


### Approach

The solution uses the following key structures:

1. **Queue**: To store the characters in the order they appear.
2. **Frequency Array**: To track how many times each character has occurred. This is an integer array of size 26, where each index corresponds to a character ('a' to 'z').

### Steps:

1. **Iterate through the string**: For each character, add it to the queue and update its frequency in the array.
2. **Check the front of the queue**:
   - If the character at the front has a frequency greater than 1 (i.e., it has appeared more than once), remove it from the queue.
   - If the queue becomes empty, output `-1` (indicating no non-repeating character exists at that point).
   - Otherwise, output the character at the front of the queue.
   
### Code

```java
import java.util.LinkedList;
import java.util.Queue;

public class Q_None_Repeate_Char {

    public static void main(String[] args) {
        String str = "aabxccbx";
        firstnonrepeat(str);
    }

    public static void firstnonrepeat(String str) {
        Queue<Character> q = new LinkedList<>();
        int freq[] = new int[26];  // Array to store frequency of characters
        
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);  // Get current character
            q.add(ch);  // Add the character to the queue
            freq[ch - 'a']++;  // Increment frequency of the character

            // Remove characters from the queue that have appeared more than once
            while (!q.isEmpty() && freq[q.peek() - 'a'] > 1) {
                q.remove();
            }

            // Output the first non-repeating character, or -1 if none exists
            if (q.isEmpty()) {
                System.out.print(-1 + " ");
            } else {
                System.out.print(q.peek() + " ");
            }
        }
    }
}
```
# 6.Reverse Queue

This project implements an algorithm to reverse a queue using a stack. The code demonstrates how to manipulate data structures effectively in Java.

## Problem Statement

Given a queue, the task is to reverse its elements without using any additional data structures besides a stack.

### Example:

For the input queue containing the elements `1, 2, 3, 4, 5`, the output after reversing will be:


### Approach

The solution uses the following data structures:

1. **Queue**: To store the initial elements.
2. **Stack**: To hold the elements temporarily while reversing the queue.

### Steps:

1. **Pop all elements from the queue**: Use a while loop to remove each element from the queue and push it onto the stack.
2. **Pop elements from the stack**: Once all elements are in the stack, pop each element from the stack and add it back to the queue.

### Code

```java
import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class Q_ReverseQueue {
    public static void main(String[] args) {
        Queue<Integer> q = new LinkedList<>();
        q.add(1);
        q.add(2);
        q.add(3);
        q.add(4);
        q.add(5);
        reverseQ(q);
        System.out.println(q);
    }

    public static void reverseQ(Queue<Integer> q) {
        Stack<Integer> s = new Stack<>();
        // Transfer all elements from queue to stack
        while (!q.isEmpty()) {
            s.push(q.remove());
        }
        // Transfer all elements from stack back to queue
        while (!s.isEmpty()) {
            q.add(s.pop());
        }
    }
}
```
# 7.Queue Using Two Stacks

This project implements a queue data structure using two stacks to perform standard queue operations such as adding, removing, and peeking at elements.

## Problem Statement

The goal is to implement a queue that can add, remove, and peek at elements using two stacks, while adhering to the first-in-first-out (FIFO) principle of a queue.

## Approach

The implementation uses two stacks to handle the queue operations:

1. **Adding an element** (`add` method):
   - Push the new element onto the first stack.
   
2. **Removing an element** (`remove` method):
   - If the second stack is empty, pop all elements from the first stack and push them onto the second stack, effectively reversing the order.
   - Pop the top element from the second stack.

3. **Peeking at the front element** (`peek` method):
   - Similar to the remove operation, if the second stack is empty, transfer all elements from the first stack to the second stack.
   - Return the top element of the second stack.

### Code Implementation

```java
import java.util.Stack;

public class Q_Using2_stacks {
    static class Queue {
        static Stack<Integer> s = new Stack<>();
        static Stack<Integer> s1 = new Stack<>();

        public boolean isEmpty() {
            return s.isEmpty();
        }

        // Add
        void add(int data) {
            s.add(data);
        }

        // Remove
        int remove() {
            if (isEmpty()) {
                System.out.println("Queue is Empty.");
                return -1;
            }

            while (!isEmpty()) {
                s1.push(s.pop());
            }

            int result = s1.pop();

            while (!s1.isEmpty()) {
                s.push(s1.pop());
            }
            return result;
        }

        // Peek
        int peek() {
            if (isEmpty()) {
                System.out.println("Queue is Empty.");
                return -1;
            }

            while (!isEmpty()) {
                s1.push(s.pop());
            }

            int peek = s1.peek();

            while (!s1.isEmpty()) {
                s.push(s1.pop());
            }
            return peek;
        }

    }

    public static void main(String[] args) {
        Queue q = new Queue();
        q.add(0);
        q.add(1);
        q.add(2);
        while (!q.isEmpty()) {
            System.out.println("Peek " + q.peek());
            q.remove();
        }
    }
}
```
# 8.Reverse Stack

This project implements a method to reverse a stack using recursion. The primary goal is to demonstrate how to manipulate the stack data structure by reversing its elements.

## Problem Statement

The task is to reverse the elements of a stack while preserving the order of the elements. This can be done using recursion without using any additional data structures for storage (like another stack or an array).

## Approach

The implementation follows a recursive approach:

1. **Base Case**: If the stack is empty, return.
2. **Recursive Step**:
   - Pop the top element from the stack.
   - Recursively reverse the remaining stack.
   - After the remaining stack is reversed, push the popped element to the bottom of the stack.

3. **Push at Bottom**: A helper method is created to insert an element at the bottom of the stack.

### Code Implementation

```java
import java.util.Stack;

public class Reverse_Stack {
    public static void main(String[] args) {
        Stack<Integer> ss = new Stack<>();
        ss.push(1);
        ss.push(2);
        ss.push(3);
        ss.push(4);
        reverse_Stack(ss);
        while (!ss.isEmpty()) {
            System.out.print(ss.peek() + " ");
            ss.pop();
        }
    }

    public static void reverse_Stack(Stack<Integer> ss) {
        if (ss.isEmpty()) {
            return;
        }

        int temp = ss.pop();
        reverse_Stack(ss);
        PushatBottom(ss, temp);
    }

    public static void PushatBottom(Stack<Integer> stack, int data) {
        if (stack.isEmpty()) {
            stack.push(data);
            return;
        }
        int temp = stack.pop();
        PushatBottom(stack, data);
        stack.push(temp);
    }
}
```
# 9.Push at Bottom of Stack

This project implements a method to push an element at the bottom of a stack using recursion. The primary goal is to demonstrate how to manipulate the stack data structure by adding an element at the bottom without using any additional data structures for storage.

## Problem Statement

The task is to insert a new element at the bottom of the stack while preserving the order of existing elements. This can be accomplished using recursion.

## Approach

The implementation follows a recursive approach:

1. **Base Case**: If the stack is empty, push the new element onto the stack.
2. **Recursive Step**:
   - Pop the top element from the stack and store it temporarily.
   - Recursively call the function to push the new element at the bottom of the remaining stack.
   - After returning from the recursive call, push the temporarily stored element back onto the stack.

### Code Implementation

```java
import java.util.Stack;

public class S_Push_At_Bottm {

    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();
        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);
        PushatBottom(stack, 5);
        while (!stack.isEmpty()) {
            System.out.println(stack.peek());
            stack.pop();
        }
    }

    private static void PushatBottom(Stack<Integer> stack, int data) {
        if (stack.isEmpty()) {
            stack.push(data);
            return;
        }
        
        // Store data for backtracking.
        int temp = stack.pop();
        PushatBottom(stack, data);
        stack.push(temp);
    }
}
```
# 10.Stock Span Problem

This project implements a solution for the Stock Span Problem, which involves calculating the span of stock prices over a given period. The span of a stock's price on a given day is defined as the number of consecutive days before that day where the price of the stock was less than or equal to its price on that day.

## Problem Statement

Given an array of stock prices, calculate the span of stock prices for each day. The span is the number of consecutive days preceding the current day where the stock price was less than or equal to the price on the current day.

## Approach

The implementation uses a stack to efficiently compute the span in linear time. The algorithm follows these steps:

1. Initialize an array `Span` to store the span values.
2. Use a stack to keep track of indices of stock prices.
3. For each stock price:
   - Pop indices from the stack while the current price is greater than the price at the index on top of the stack.
   - If the stack is empty after popping, it means the current price is higher than all previous prices, so the span is the current index + 1.
   - If the stack is not empty, the span is the difference between the current index and the index on the top of the stack.
4. Push the current index onto the stack for future comparisons.

### Code Implementation

```java
import java.util.Arrays;
import java.util.Stack;

public class Stock_Span {
    public static void main(String[] args) {
        int[] Stock = { 100, 80, 60, 70, 60, 85, 100 };
        int[] Span = new int[Stock.length];
        findSpan(Stock, Span);
        System.out.println(Arrays.toString(Span));
    }

    public static void findSpan(int[] stock, int[] Span) {
        Stack<Integer> s = new Stack<>();
        Span[0] = 1;
        s.push(0);
        for (int i = 1; i < stock.length; i++) {
            int curr = stock[i];
            while (!s.isEmpty() && curr > stock[s.peek()]) {
                s.pop();
            }
            if (s.isEmpty()) {
                Span[i] = i + 1;
            } else {
                int prevhigh = s.peek();
                Span[i] = i - prevhigh;
            }
            s.push(i);
        }
    }
}
