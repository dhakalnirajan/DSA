#include <iostream>
using namespace std;

#define SIZE 5

int main() {
  int queue[SIZE], data, i, choice;
  int rear = 0;  // rear of the queue is initially zero.
  int front = 0; // front of queue is initially zero.

  while (1) {
    cout << "\n 1. Insert Element";
    cout << "\n 2. Delete Element";
    cout << "\n 3. View Elements";
    cout << "\n 4. Exit";
    cout << "\n Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1: // Insert Element
      if (rear < SIZE) {
        cout << "\n Enter the data: ";
        cin >> data;
        queue[rear] = data; // inserting the data in the queue
        rear++;
      } else {
        cout << "\n Queue is full";
      }
      break;

    case 2: // Delete Element
      if (front < rear) {
        cout << "\n The deleted element is: " << queue[front];
        front++;
      } else {
        cout << "\n Queue is empty";
      }
      break;

    case 3: // View Elements
      if (rear > front) {
        cout << "\n The elements in the queue are: ";
        for (i = front; i < rear; i++) {
          cout << queue[i] << " ";
        }
      } else {
        cout << "\n Queue is empty";
      }
      break;

    case 4: // Exit
      exit(0);

    default:
      cout << "Enter the correct choice 1-4";
    }
  }
  return 0;
}
