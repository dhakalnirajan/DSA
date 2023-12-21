# Linear Queue Implementation Documentation

## Overview

A linear queue follows the First-In-First-Out (FIFO) principle, where the first element inserted is the first one to be removed.

## Code Structure

The code is structured to perform basic queue operations such as insertion, deletion, and viewing of elements. It uses an array to represent the queue.

### Constants

- `SIZE`: Represents the maximum size of the queue.

### Variables

- `queue[SIZE]`: Array to store the elements of the queue.
- `data`: Variable to hold the data to be inserted.
- `i`: Loop variable for iterating through the queue.
- `choice`: Variable to store the user's menu choice.
- `rear`: Represents the rear of the queue.
- `front`: Represents the front of the queue.

## Menu-driven Interface

The program presents a menu-driven interface to the user, allowing them to choose from the following options:

1. **Insert Element**
   - Inserts an element into the queue if there is space.

2. **Delete Element**
   - Removes the front element from the queue if it is not empty.

3. **View Elements**
   - Displays all elements in the queue.

4. **Exit**
   - Exits the program.

## Operations

### 1. Insert Element

- User is prompted to enter data.
- If the queue is not full, the data is inserted at the rear of the queue.
- If the queue is full, a message indicates that the queue is full.

### 2. Delete Element

- If the queue is not empty, the front element is deleted.
- If the queue is empty, a message indicates that the queue is empty.

### 3. View Elements

- Displays all elements in the queue if the queue is not empty.
- If the queue is empty, a message indicates that the queue is empty.

### 4. Exit

- Exits the program.

## Usage

1. Compile the program.
2. Run the executable.
3. Follow the menu prompts to perform queue operations.

## Conclusion

This program provides a simple implementation of a linear queue using an array. Users can interact with the program to insert, delete, and view elements in the queue. The program includes error messages for cases where the queue is full or empty.
