import java.util.Scanner;

public class StackExample {

  static final int size = 5;

  public static void main(String[] args) {
    // Declaration of variables
    int[] stack = new int[size];
    int data, choice, i;
    int top = 0; // top of stack empty

    // Creating Scanner object for user input
    Scanner scanner = new Scanner(System.in);

    // Menu-driven loop
    while (true) {
      // Displaying menu options
      System.out.println("\n 1. Push Element");
      System.out.println(" 2. Pop Element");
      System.out.println(" 3. Display Stack");
      System.out.println(" 4. Exit ");
      System.out.print(" Enter your choice: ");
      choice = scanner.nextInt();

      // Switch case for menu options
      switch (choice) {
        case 1:
          // Push Element operation
          if (top < size) {
            System.out.print(" Enter any element: ");
            data = scanner.nextInt();
            stack[top] = data;
            top++;
          } else {
            System.out.println(" Stack is full");
          }
          break;
        case 2:
          // Pop Element operation
          if (top > 0) {
            top--;
            System.out.println(" The popped element is " + stack[top]);
          } else {
            System.out.println(" Stack is empty");
          }
          break;
        case 3:
          // Display Stack operation
          if (top == 0) {
            System.out.println(" Stack is empty");
          } else {
            System.out.println(" The elements in the stack are: ");
            for (i = top - 1; i >= 0; i--) {
              System.out.println(stack[i]);
            }
          }
          break;
        case 4:
          // Exit program
          System.exit(0);
          break;
        default:
          // Invalid option
          System.out.println(" Select options 1-4 only");
          break;
      }
    }
  }
}
