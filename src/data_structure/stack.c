// Algorithm for PUSH Operation

/*

Let stack (max size) is an array for implementing the stack.

Step-1: Start
Step-2: If (TOP == max_size):
            Print "Overflow"
            go to step-5.
Step-3: Stack[TOP] = item
Step-4: TOP = TOP + 1
Step-5: End

*/

// Algorithm for POP Operation

/*

Let stack (max size) is an array for implementing the stack.

Step-1: Start
Step-2: If (TOP == 0):
            Print "Underflow"
            go to step-5.
Step-3: TOP = TOP - 1
Step-4: item = Stack[TOP]
Step-5: End

*/

// Documentation of Stack data structure implemented in C is in the readme file inside this directory.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // Note: 'conio.h' is not portable

#define size 5

int main()
{
    // Declaration of variables
    int stack[size];
    int data, choice, i;
    int top = 0; // top of stack empty

    // Menu-driven loop
    while (1)
    {
        // Displaying menu options
        printf("\n 1. Push Element");
        printf("\n 2. Pop Element");
        printf("\n 3. Display Stack");
        printf("\n 4. Exit ");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);

        // Switch case for menu options
        switch (choice)
        {
        case 1:
            // Push Element operation
            if (top < size)
            {
                printf("\n Enter any element: ");
                scanf("%d", &data);
                stack[top] = data;
                top++;
            }
            else
            {
                printf("\n Stack is full");
            }
            break;

        case 2:
            // Pop Element operation
            if (top > 0)
            {
                top--;
                printf("\n The popped element is %d", stack[top]);
            }
            else
            {
                printf("\n Stack is empty");
            }
            break;

        case 3:
            // Display Stack operation
            if (top == 0)
            {
                printf("\n Stack is empty");
            }
            else
            {
                printf("\n The elements in the stack are: ");
                for (i = top - 1; i >= 0; i--)
                {
                    printf("\n %d", stack[i]);
                }
            }
            break;

        case 4:
            // Exit program
            exit(0);
            break;

        default:
            // Invalid option
            printf("\n Select options 1-4 only");
            break;
        }
    }
    return 0;
}
