#include <iostream>
#include <cstdlib>

using namespace std;

#define size 5

int main(){
    // Declaration of variables
    int stack[size];
    int data, choice, i;
    int top = 0; // top of stack empty

    // Menu-driven loop
    while (1)
    {
        // Displaying menu options
        cout << "\n 1. Push Element";
        cout << "\n 2. Pop Element";
        cout << "\n 3. Display Stack";
        cout << "\n 4. Exit ";
        cout << "\n Enter your choice: ";
        cin >> choice;

        // Switch case for menu options
        switch (choice)
        {
        case 1:
            // Push Element operation
            if (top < size)
            {
                cout << "\n Enter any element: ";
                cin >> data;
                stack[top] = data;
                top++;
            }
            else
            {
                cout << "\n Stack is full";
            }
            break;

        case 2:
            // Pop Element operation
            if (top > 0)
            {
                top--;
                cout << "\n The popped element is " << stack[top];
            }
            else
            {
                cout << "\n Stack is empty";
            }
            break;

        case 3:
            // Display Stack operation
            if (top == 0)
            {
                cout << "\n Stack is empty";
            }
            else
            {
                cout << "\n The elements in the stack are: ";
                for (i = top - 1; i >= 0; i--)
                {
                    cout << "\n " << stack[i];
                }
            }
            break;

        case 4:
            // Exit program
            exit(0);
            break;

        default:
            // Invalid option
            cout << "\n Select options 1-4 only";
            break;
        }
    }
    return 0;
}
