# Python program to implement the queue data structure using linked lists.
class Node:
    def __init__(self, new_data):
        self.data = new_data
        self.next = None

# Class to implement queue operations using a linked list
class Queue:
    def __init__(self):
      
        # Pointer to the front and the rear of the linked list
        self.front = None
        self.rear = None

    # Function to check if the queue is empty
    def is_empty(self):
      
        # If the front and rear are null, then the queue is
        # empty, otherwise it's not
        return self.front is None and self.rear is None

    # Function to add an element to the queue
    def enqueue(self, new_data):
      
        # Create a new linked list node
        new_node = Node(new_data)

        # If queue is empty, the new node is both the front
        # and rear
        if self.rear is None:
            self.front = self.rear = new_node
            return

        # Add the new node at the end of the queue and
        # change rear
        self.rear.next = new_node
        self.rear = new_node

    # Function to remove an element from the queue
    def dequeue(self):
      
        # If queue is empty, return
        if self.is_empty():
            print("Queue Underflow")
            return

        # Store previous front and move front one node
        # ahead
        temp = self.front
        self.front = self.front.next

        # If front becomes null, then change rear also
        # to null
        if self.front is None:
            self.rear = None

    # Function to get the front element of the queue
    def get_front(self):
      
        # Checking if the queue is empty
        if self.is_empty():
            print("Queue is empty")
            return float('-inf')
        return self.front.data

    # Function to get the rear element of the queue
    def get_rear(self):
      
        # Checking if the queue is empty
        if self.is_empty():
            print("Queue is empty")
            return float('-inf')
        return self.rear.data


# Driver code
if __name__ == "__main__":
    q = Queue()

    # Enqueue elements into the queue
    q.enqueue(10)
    q.enqueue(20)

    # Display the front and rear elements of the queue
    print("Queue Front:", q.get_front())
    print("Queue Rear:", q.get_rear())

    # Dequeue elements from the queue
    q.dequeue()
    q.dequeue()

    # Enqueue more elements into the queue
    q.enqueue(30)
    q.enqueue(40)
    q.enqueue(50)

    # Dequeue an element from the queue
    q.dequeue()

    # Display the front and rear elements of the queue
    print("Queue Front:", q.get_front())
    print("Queue Rear:", q.get_rear())
