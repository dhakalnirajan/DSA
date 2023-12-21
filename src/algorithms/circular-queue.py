SIZE = 5
cqueue = [0] * SIZE
rear = front = count = 0

while True:
    print("\n 1. Insert Element")
    print(" 2. Delete Element")
    print(" 3. Display/View Element")
    print(" 4. Exit")
    choice = int(input(" Enter your choice: "))

    if choice == 1:
        if count < SIZE:
            data = int(input("\n Enter any data: "))
            cqueue[rear] = data
            rear = (rear + 1) % SIZE
            count += 1
        else:
            print("\n Queue is full")
    elif choice == 2:
        if count > 0:
            print("\n The deleted element is:", cqueue[front])
            front = (front + 1) % SIZE
            count -= 1
        else:
            print("\n Queue is empty")
    elif choice == 3:
        if count > 0:
            print("\n The elements in the queue are:", end=" ")
            i = front
            j = 0
            while j < count:
                print(cqueue[i], end=" ")
                i = (i + 1) % SIZE
                j += 1
        else:
            print("\n Queue is empty")
    elif choice == 4:
        break
    else:
        print("\n Enter the valid choice: 1- 4")
