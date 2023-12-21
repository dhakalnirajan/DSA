SIZE = 5
queue = [0] * SIZE
rear = 0  # rear of the queue is initially zero.
front = 0  # front of queue is initially zero.

while True:
    print("\n 1. Insert Element")
    print(" 2. Delete Element")
    print(" 3. View Elements")
    print(" 4. Exit")
    choice = int(input(" Enter your choice: "))

    if choice == 1:  # Insert Element
        if rear < SIZE:
            data = int(input("\n Enter the data: "))
            queue[rear] = data  # inserting the data in the queue
            rear += 1
        else:
            print("\n Queue is full")
    elif choice == 2:  # Delete Element
        if front < rear:
            print("\n The deleted element is:", queue[front])
            front += 1
        else:
            print("\n Queue is empty")
    elif choice == 3:  # View Elements
        if rear > front:
            print("\n The elements in the queue are:", end=" ")
            for i in range(front, rear):
                print(queue[i], end=" ")
        else:
            print("\n Queue is empty")
    elif choice == 4:  # Exit
        break
    else:
        print("Enter the correct choice 1-4")
