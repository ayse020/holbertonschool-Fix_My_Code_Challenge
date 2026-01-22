#!/usr/bin/python3
import sys

def fizzbuzz(n):
    for i in range(1, n + 1):
        if i % 3 == 0 and i % 5 == 0:
            print("FizzBuzz", end="" if i == n else " ")
        elif i % 3 == 0:
            print("Fizz", end="" if i == n else " ")
        elif i % 5 == 0:
            print("Buzz", end="" if i == n else " ")
        else:
            print(i, end="" if i == n else " ")
    print()

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: ./0-fizzbuzz.py <number>")
    else:
        fizzbuzz(int(sys.argv[1]))
