/* WAP to print numbers from 1 to 10 in such a way that when the number is odd,
add 1 and when number is even, subtract 1.

Output: 2 1 4 3 6 5 8 7 10 9
*/

#include <iostream>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            std::cout << i - 1 << " ";
        } else {
            std::cout << i + 1 << " ";
        }
    }
    return 0;
}
#include <iostream>

void printNumber(int n);

void printOdd(int n) {
    if (n <= 10) {
        std::cout << n + 1 << " ";
        printNumber(n + 2);
    }
}

void printEven(int n) {
    if (n <= 10) {
        std::cout << n - 1 << " ";
        printNumber(n + 2);
    }
}

void printNumber(int n) {
    if (n % 2 == 0) {
        printEven(n);
    } else {
        printOdd(n);
    }
}

int main() {
    printNumber(1);
    return 0;
}
