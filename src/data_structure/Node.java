class Node {
    int data;
    Node link;
}

public class Main {
    public static void main(String[] args) {
        Node head = null;
        head = new Node();
        head.data = 45;
        head.link = null;
        System.out.println(head.data); // Output: 45
    }
}
