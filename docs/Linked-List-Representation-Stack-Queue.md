# Linked List Representation of stack and queue

A stack is a linear data structure that follows a particular order in which operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out). Mainly the following three basic operations are performed in the stack:

Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
Peek or Top: Returns the top element of the stack.
isEmpty: Returns true if the stack is empty, else false.

A queue is a linear structure which follows a particular order in which the operations are performed. The order is First In First Out (FIFO). A good example of a queue is any queue of consumers for a resource where the consumer that came first is served first. The difference between stacks and queues is in removing. In a stack we remove the item the most recently added; in a queue, we remove the item the least recently added.

A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers. In simple words, a linked list consists of nodes, which contains two parts: data and address of the next node. The last node of the list contains a NULL address.

Stack Operations:

Push: Adds an element to the top of the stack.

Pop: Removes an element from the top of the stack.

Peek or Top: Returns the top element of the stack without removing it.

isEmpty: Checks if the stack is empty.

isFull: Checks if the stack is full (relevant for stack with a fixed size like array-based stacks).

Queue Operations:

Enqueue: Adds an element to the end of the queue.

Dequeue: Removes an element from the front of the queue.

Front: Returns the front element of the queue without removing it.

Rear: Returns the last element of the queue without removing it.

isEmpty: Checks if the queue is empty.

isFull: Checks if the queue is full (relevant for queue with a fixed size like array-based queues).

These operations allow us to add, remove, and inspect elements in stacks and queues.
The main difference between a stack and a queue is in the order of the elements: a stack is LIFO (Last In First Out), while a queue is FIFO (First In First Out).
