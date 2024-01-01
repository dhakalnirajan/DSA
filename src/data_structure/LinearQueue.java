import java.util.Scanner;

public class LinearQueue {

  static final int SIZE = 5;

  public static void main(String[] args) {
    int[] queue = new int[SIZE];
    int data, i, choice;
    int rear = 0; // rear of the queue is initially zero.
    int front = 0; // front of queue is initially zero.
    Scanner scanner = new Scanner(System.in);

    while (true) {
      System.out.println("\n 1. Insert Element");
      System.out.println(" 2. Delete Element");
      System.out.println(" 3. View Elements");
      System.out.println(" 4. Exit");
      System.out.print(" Enter your choice: ");
      choice = scanner.nextInt();

      switch (choice) {
        case 1: // Insert Element
          if (rear < SIZE) {
            System.out.print("\n Enter the data: ");
            data = scanner.nextInt();
            queue[rear] = data; // inserting the data in the queue
            rear++;
          } else {
            System.out.println("\n Queue is full");
          }
          break;
        case 2: // Delete Element
          if (front < rear) {
            System.out.println("\n The deleted element is: " + queue[front]);
            front++;
          } else {
            System.out.println("\n Queue is empty");
          }
          break;
        case 3: // View Elements
          if (rear > front) {
            System.out.print("\n The elements in the queue are: ");
            for (i = front; i < rear; i++) {
              System.out.print(queue[i] + " ");
            }
          } else {
            System.out.println("\n Queue is empty");
          }
          break;
        case 4: // Exit
          System.exit(0);
        default:
          System.out.println("Enter the correct choice 1-4");
      }
    }
  }
}
