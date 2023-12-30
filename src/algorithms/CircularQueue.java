import java.util.Scanner;

public class CircularQueue {

  static final int SIZE = 5;

  public static void main(String[] args) {
    int[] cqueue = new int[SIZE];
    int data, choice;
    int rear = 0;
    int front = 0;
    int count = 0;
    Scanner scanner = new Scanner(System.in);

    while (true) {
      System.out.println("\n 1. Insert Element");
      System.out.println(" 2. Delete Element");
      System.out.println(" 3. Display/View Element");
      System.out.println(" 4. Exit");
      System.out.print(" Enter your choice: ");
      choice = scanner.nextInt();

      switch (choice) {
        case 1:
          if (count < SIZE) {
            System.out.print("\n Enter any data: ");
            data = scanner.nextInt();
            cqueue[rear] = data;
            rear = (rear + 1) % SIZE;
            count++;
          } else {
            System.out.println("\n Queue is full");
          }
          break;
        case 2:
          if (count > 0) {
            System.out.println("\n The deleted element is: " + cqueue[front]);
            front = (front + 1) % SIZE;
            count--;
          } else {
            System.out.println("\n Queue is empty");
          }
          break;
        case 3:
          if (count > 0) {
            System.out.print("\n The elements in the queue are: ");
            int i = front;
            int j = 0;
            while (j < count) {
              System.out.print(cqueue[i] + " ");
              i = (i + 1) % SIZE;
              j++;
            }
          } else {
            System.out.println("\n Queue is empty");
          }
          break;
        case 4:
          System.exit(0);
        default:
          System.out.println("\n Enter the valid choice: 1- 4");
      }
    }
  }
}
