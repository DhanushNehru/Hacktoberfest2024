class Stack {
    private int maxSize;    // Size of the stack
    private int[] stackArray; // Array to store stack elements
    private int top;         // Top of the stack

    // Constructor to initialize stack
    public Stack(int size) {
        maxSize = size;
        stackArray = new int[maxSize];
        top = -1;  // Stack is initially empty
    }

    // Push method to add elements to the stack
    public void push(int value) {
        if (isFull()) {
            System.out.println("Stack is full. Cannot push " + value);
        } else {
            stackArray[++top] = value; // Increment top and insert value
        }
    }

    // Pop method to remove elements from the stack
    public int pop() {
        if (isEmpty()) {
            System.out.println("Stack is empty. Cannot pop.");
            return -1;
        } else {
            return stackArray[top--]; // Return top value and decrement top
        }
    }

    // Peek method to see the top element of the stack
    public int peek() {
        if (isEmpty()) {
            System.out.println("Stack is empty.");
            return -1;
        } else {
            return stackArray[top]; // Return top value without popping
        }
    }

    // Method to check if the stack is empty
    public boolean isEmpty() {
        return (top == -1);
    }

    // Method to check if the stack is full
    public boolean isFull() {
        return (top == maxSize - 1);
    }

    public static void main(String[] args) {
        Stack stack = new Stack(5); // Creating a stack of size 5

        stack.push(10);
        stack.push(20);
        stack.push(30);
        stack.push(40);
        stack.push(50);
        stack.push(60); // Trying to push an element when the stack is full

        System.out.println("Top element is: " + stack.peek());

        System.out.println("Popped element: " + stack.pop());
        System.out.println("Popped element: " + stack.pop());
        System.out.println("Popped element: " + stack.pop());

        System.out.println("Top element after popping: " + stack.peek());

        while (!stack.isEmpty()) {
            System.out.println("Popped element: " + stack.pop());
        }
        
        // Trying to pop an element from an empty stack
        stack.pop();
    }
}
