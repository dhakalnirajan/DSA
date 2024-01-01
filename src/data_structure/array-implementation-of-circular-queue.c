// Implementation of Circular Queue

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main() {
  int cqueue[SIZE];
  int data, choice;
  int rear = 0;
  int front = 0;
  int count = 0;

  while (1) {
    printf("\n 1. Insert Element");
    printf("\n 2. Delete Element");
    printf("\n 3. Display/View Element");
    printf("\n 4. Exit");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      if (count < SIZE) {
        printf("\n Enter any data: ");
        scanf("%d", &data);
        cqueue[rear] = data;
        rear = (rear + 1) % SIZE;
        count++;
      } else {
        printf("\n Queue is full");
      }
      break;

    case 2:
      if (count > 0) {
        printf("\n The deleted element is: %d", cqueue[front]);
        front = (front + 1) % SIZE;
        count--;
      } else {
        printf("\n Queue is empty");
      }
      break;

    case 3:
      if (count > 0) {
        printf("\n The elements in the queue are: ");
        int i = front;
        int j = 0;
        while (j < count) {
          printf("%d ", cqueue[i]);
          i = (i + 1) % SIZE;
          j++;
        }
      } else {
        printf("\n Queue is empty");
      }
      break;

    case 4:
      exit(0);

    default:
      printf("\n Enter the valid choice: 1- 4");
    }
  }
  return 0;
}