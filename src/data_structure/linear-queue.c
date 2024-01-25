#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {
  int queue[SIZE], data, i, choice;
  int rear = 0;  // rear of the queue is initially zero.
  int front = 0; // front of queue is initially zero.

  while (1) {
    printf("\n 1. Insert Element");
    printf("\n 2. Delete Element");
    printf("\n 3. View Elements");
    printf("\n 4. Exit");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1: // Insert Element
      if (rear < SIZE) {
        printf("\n Enter the data: ");
        scanf("%d", &data);
        queue[rear] = data; // inserting the data in the queue
        rear++;
      } else {
        printf("\n Queue is full");
      }
      break;

    case 2: // Delete Element
      if (front < rear) {
        printf("\n The deleted element is: %d", queue[front]);
        front++;
      } else {
        printf("\n Queue is empty");
      }
      break;

    case 3: // View Elements
      if (rear > front) {
        printf("\n The elements in the queue are: ");
        for (i = front; i < rear; i++) {
          printf("%d ", queue[i]);
        }
      } else {
        printf("\n Queue is empty");
      }
      break;

    case 4: // Exit
      exit(0);

    default:
      printf("Enter the correct choice 1-4");
    }
  }
  return 0;
}
