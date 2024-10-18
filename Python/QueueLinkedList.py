# Python program to implement the queue using linked lists.

class Node:
    #Represents a node in the linked list.
    def __init__(self, data):
        self.data = data
        self.next = None

class Queue:

    def __init__(self):  #A queue implementation using a singly linked list.
        self.head = None  # Front of the queue
        self.tail = None  # Rear of the queue
        self.size = 0     # Number of elements in the queue

    #Check if the queue is empty
    def is_empty(self): 
        return self.size == 0              

    def enqueue(self, data):        #Add an element to the end of the queue

        new_node = Node(data)
        if self.tail:
            self.tail.next = new_node  # Link the new node after the current tail
            print(f"Enqueued: {data} after {self.tail.data}")
        else:
            self.head = new_node  # If the queue was empty new node becomes the head
            print(f"Enqueued: {data} as the first element")

        self.tail = new_node  # Update the tail to the new node
        self.size += 1
        print(f"Queue size after enqueue: {self.size}")

    def dequeue(self):

        #Remove and return the element from the front of the queue.
        if self.is_empty():
            raise IndexError("Dequeue from empty queue")
        
        dequeued_data = self.head.data
        self.head = self.head.next  # Move head to the next node
        if self.head is None:
            self.tail = None
            print("Queue is now empty after dequeue")
        self.size -= 1
        print(f"Dequeued: {dequeued_data}")
        print(f"Queue size after dequeue: {self.size}")
        return dequeued_data

    def peek(self):

        if self.is_empty():
            raise IndexError("Peek from empty queue")
        print(f"Front element: {self.head.data}")
        return self.head.data

    def __len__(self):

        return self.size

    def __str__(self):

        elements = []
        current = self.head
        while current:
            elements.append(str(current.data))
            current = current.next
        return " -> ".join(elements)

# Usage
if __name__ == "__main__":
    q = Queue()
    
    print("Enqueuing elements:")            # Enqueue elements
    q.enqueue(10)
    q.enqueue(20)
    q.enqueue(30)
    print(f"Current Queue: {q}\n")
    
    print("Dequeuing an element:")              # Dequeue elements
    print(f"Dequeued: {q.dequeue()}")
    print(f"Current Queue: {q}\n")
    
    print("Peeking at the front element:")          # Peek at the front element
    print(f"Front element is: {q.peek()}\n")
    
    print("Checking queue size:")                       # Check size
    print(f"Queue size: {len(q)}\n")
    
    print("Dequeuing remaining elements:")              # Dequeue remaining elements
    print(f"Dequeued: {q.dequeue()}")
    print(f"Dequeued: {q.dequeue()}\n")
    
    print("Attempting to dequeue from an empty queue:")
    try:
        q.dequeue()
    except IndexError as e:
        print(f"Error: {e}")