"""
WAP to print numbers from 1 to 10 in such a way that when the number is odd,
add 1 and when number is even, subtract 1.

Output: 2 1 4 3 6 5 8 7 10 9
"""


def odd(n):
    if n <= 10:
        print(n + 1, end=" ")
        even(n + 1)


def even(n):
    if n <= 10:
        print(n - 1, end=" ")
        odd(n + 1)


odd(1)
