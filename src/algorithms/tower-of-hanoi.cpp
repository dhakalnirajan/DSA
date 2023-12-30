#include <iostream>

void move(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        std::cout << "Move disk 1 from " << source << " to " << destination << std::endl;
    } else {
        move(n - 1, source, auxiliary, destination);
        std::cout << "Move disk " << n << " from " << source << " to " << destination << std::endl;
        move(n - 1, auxiliary, destination, source);
    }
}

int main() {
    int num_disks = 3;
    move(num_disks, 'A', 'C', 'B');
    return 0;
}
