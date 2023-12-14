class Stack:
    def __init__(self, size):
        self.size = size
        self.stack = []
        self.top = 0

    def push(self, data):
        if self.top < self.size:
            self.stack.append(data)
            self.top += 1
        else:
            print("\n Stack is full")

    def pop(self):
        if self.top > 0:
            self.top -= 1
            print("\n The popped element is", self.stack[self.top])
        else:
            print("\n Stack is empty")

    def display(self):
        if self.top == 0:
            print("\n Stack is empty")
        else:
            print("\n The elements in the stack are: ")
            for i in range(self.top - 1, -1, -1):
                print(self.stack[i])


def main():
    size = 5
    stack = Stack(size)

    while True:
        print("\n 1. Push Element")
        print(" 2. Pop Element")
        print(" 3. Display Stack")
        print(" 4. Exit")
        choice = int(input("\n Enter your choice: "))

        if choice == 1:
            data = int(input("\n Enter any element: "))
            stack.push(data)
        elif choice == 2:
            stack.pop()
        elif choice == 3:
            stack.display()
        elif choice == 4:
            exit(0)
        else:
            print("\n Select options 1-4 only")


if __name__ == "__main__":
    main()
