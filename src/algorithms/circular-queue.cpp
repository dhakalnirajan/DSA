// Implementation of Circular Queue in C++

#include <iostream>
using namespace std;

#define SIZE 5

int main() {
  int cqueue[SIZE];
  int data, choice;
  int rear = 0;
  int front = 0;
  int count = 0;

  while (1) {
    cout << "\n 1. Insert Element";
    cout << "\n 2. Delete Element";
    cout << "\n 3. Display/View Element";
    cout << "\n 4. Exit";
    cout << "\n Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        if (count < SIZE) {
          cout << "\n Enter any data: ";
          cin >> data;
          cqueue[rear] = data;
          rear = (rear + 1) % SIZE;
          count++;
        } else {
          cout << "\n Queue is full";
        }
        break;

      case 2:
        if (count > 0) {
          cout << "\n The deleted element is: " << cqueue[front];
          front = (front + 1) % SIZE;
          count--;
        } else {
          cout << "\n Queue is empty";
        }
        break;

      case 3:
        if (count > 0) {
          cout << "\n The elements in the queue are: ";
          int i = front;
          int j = 0;
          while (j < count) {
            cout << cqueue[i] << " ";
            i = (i + 1) % SIZE;
            j++;
          }
        } else {
          cout << "\n Queue is empty";
        }
        break;

      case 4:
        exit(0);

      default:
        cout << "\n Enter the valid choice: 1- 4";
    }
  }
  return 0;
}
