# Tower of Hanoi Implementation Documentation

## Overview

The Tower of Hanoi is a classic recursive algorithm that solves the problem of moving a stack of disks from one peg to another under specific constraints. The algorithm follows a recursive strategy to minimize the number of moves required to solve the puzzle.

## Algorithm

The Tower of Hanoi algorithm works as follows:

1. **Base Case (N == 1):**
   - Move the top disk from the source peg to the destination peg.

2. **Recursive Step:**
   - Move N-1 disks from the source peg to the auxiliary peg.
   - Move the remaining disk from the source peg to the destination peg.
   - Move the N-1 disks from the auxiliary peg to the destination peg.

The minimum number of moves required for N disks is given by the formula 2^n - 1.

## Code Structure

The code implements the Tower of Hanoi algorithm for three disks. It consists of a `move` function that performs the recursive steps and prints each move.

### Function Parameters

- `n`: The number of disks.
- `source`: The source peg.
- `destination`: The destination peg.
- `auxiliary`: The auxiliary peg.

## Example Output

The program output demonstrates the sequence of moves required to solve the Tower of Hanoi problem with three disks:

```
Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C
```

## Usage

1. Examine the code to understand the recursive structure.
2. Compile the code using a suitable compiler.
3. Run the executable.
4. Observe the output to understand the sequence of moves in the Tower of Hanoi problem.

## Conclusion

This code provides a clear implementation of the Tower of Hanoi algorithm for educational purposes. Users can explore the recursive nature of the algorithm and observe how it efficiently solves the problem of moving a stack of disks between pegs.
