# Circular Queue Implementation Documentation

## Overview

Circular queues are an extension of linear queues, where the front and rear elements are connected in a circular manner. This ensures efficient space utilization.

## Code Structure

The code facilitates basic circular queue operations such as insertion, deletion, and viewing of elements. It utilizes an array to represent the circular queue.

### Constants

- `SIZE`: Represents the maximum size of the circular queue.

### Variables

- `cqueue[SIZE]`: Array to store the elements of the circular queue.
- `data`: Variable to hold the data to be inserted.
- `choice`: Variable to store the user's menu choice.
- `rear`: Represents the rear of the circular queue.
- `front`: Represents the front of the circular queue.
- `count`: Tracks the number of elements in the circular queue.

## Menu-driven Interface

The program offers a menu-driven interface allowing users to choose from the following options:

1. **Insert Element**
   - Inserts an element into the circular queue if there is space.

2. **Delete Element**
   - Removes the front element from the circular queue if it is not empty.

3. **Display/View Elements**
   - Displays all elements in the circular queue.

4. **Exit**
   - Exits the program.

## Operations

### 1. Insert Element

- User is prompted to enter data.
- If the circular queue is not full, the data is inserted at the rear, and the rear index is updated circularly.
- If the circular queue is full, a message indicates that the queue is full.

### 2. Delete Element

- If the circular queue is not empty, the front element is deleted, and the front index is updated circularly.
- If the circular queue is empty, a message indicates that the queue is empty.

### 3. Display/View Elements

- Displays all elements in the circular queue if it is not empty.
- If the circular queue is empty, a message indicates that the queue is empty.

### 4. Exit

- Exits the program.

## Usage

1. Compile the program.
2. Run the executable.
3. Follow the menu prompts to perform circular queue operations.

## Conclusion

This program provides a simple implementation of a circular queue using an array. Users can interact with the program to insert, delete, and view elements in the circular queue. The circular arrangement of elements ensures efficient use of space in the queue.
