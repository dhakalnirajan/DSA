/*
The Tower of Hanoi

Formula to calculate the number of moves required to solve the puzzle with the
minimum number of moves is 2^n - 1, where n is the number of disks.

For our use case, we will implement it in a way that the number of disks is 3.

Algorithm:

Tower(N, BEG, AUX, END)

1. IF N == 1, then write BEG -> END & exit
2. Move N-1 disks from BEG to AUX; Call Tower(N-1, BEG, AUX, END)
3. Write BEG -> END
4. Move N-1 disks from AUX to END; Call Tower(N-1, AUX, BEG, END)
5. END
*/

#include <stdio.h>

void move(int n, char source, char destination, char auxiliary) {
  if (n == 1) {
    printf("Move disk 1 from %c to %c\n", source, destination);
    return;
  } else {
    move(n - 1, source, auxiliary, destination);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    move(n - 1, auxiliary, destination, source);
  }
}

int main() {
  int num_disks = 3;
  move(num_disks, 'A', 'C', 'B');
  return 0;
}