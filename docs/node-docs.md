# Node and Linked List Creation Algorithm

## Table of Contents

1. Introduction
2. Node Structure
3. Linked List Structure
4. Node Usage in Linked List
5. Step-by-Step Algorithm

## 1. Introduction

This algorithm outlines the process of creating a singly-linked list Node and using it in a linked list. The purpose is to demonstrate the fundamental steps involved in creating and initializing a Node and establishing a linked list.

## 2. Node Structure

A Node is the basic building block of a linked list. It consists of two main components:

- **Data**: An integer field representing the information stored in the Node.
- **Link**: A reference to the next Node in the linked list.

## 3. Linked List Structure

A linked list is a data structure composed of Nodes, where each Node points to the next Node in the sequence. It begins with a head Node, and the last Node points to NULL.

## 4. Node Usage in Linked List

Nodes are connected in a sequential manner to form a linked list. The link field of each Node points to the next Node, creating a chain-like structure. The head Node serves as the starting point of the linked list.

## 5. Step-by-Step Algorithm

### Step 1: Node Creation

1.1. Define a structure named `Node` with fields: `data` and `link`.

1.2. Allocate memory for a new Node using the `malloc` function.

1.3. Set the `data` field of the new Node with the desired value.

1.4. Initialize the `link` field to NULL.

### Step 2: Linked List Initialization

2.1. Declare a pointer to a Node called `head` and set it to NULL.

### Step 3: Connecting Nodes in Linked List

3.1. Establish a link from the `head` Node to the newly created Node.

3.2. Update the `head` pointer to point to the newly created Node.

### Step 4: Print Node Data

4.1. Use the `printf` function to display the data of the head Node.

### Conclusion

This algorithm provides a simple yet foundational guide to creating Nodes, initializing a linked list, connecting Nodes, and printing Node data. It serves as a basis for more complex linked list operations and manipulations.
