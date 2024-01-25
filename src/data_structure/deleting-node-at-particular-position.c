// Deleting Node at Particular Position

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

/**
 * Deletes a node at a particular position in a linked list.
 * 
 * @param head The head of the linked list.
 * @param position The position of the node to be deleted.
 */
// Function to delete a node at a specific position in a linked list
void del_pos(struct node **head, int position){
    // Initialize current node to head and previous node to NULL
    struct node *current = *head;
    struct node *previous = NULL;

    // If the list is empty, print a message and return
    if (*head == NULL){
        printf("List is already empty!");
    }
    // If the position is 1, delete the head node
    else if (position == 1){
        *head = current->link; // Make the second node the new head
        free(current); // Free the memory of the old head node
        current = NULL; // Set current to NULL for safety
    }
    else{
        // Traverse the list until the desired position is reached
        while (position > 1){
            previous = current; // Keep track of the previous node
            current = current->link; // Move to the next node
            position--; // Decrease the position counter
        }
        // Delete the current node by bypassing it in the list
        previous->link = current->link;
        free(current); // Free the memory of the current node
        current = NULL; // Set current to NULL for safety
    }
}

int main(){
    int position = 2; // Position of the node to be deleted
    del_pos(&head, position); // Call the function to delete the node

    // Print the list after the deletion
    ptr = head;
    while (ptr != NULL){
        printf("%d ", ptr->data); // Print the data of the current node
        ptr = ptr->link; // Move to the next node
    }
    return 0;
}