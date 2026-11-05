# C Examples

Practice problems I solved while learning C. They are split into five assignments that start from basic arithmetic and work up to nested loops and number theory.

## Assignments

### Assignment 1 — Basics

| File | What it does |
|------|--------------|
| `1.c` | Calculator that takes two integers and prints their sum, difference, product, quotient and remainder, with overflow and divide-by-zero checks. |
| `2.c` | Reads a 4-digit number, reverses it, and validates the input. |
| `3.c` | Computes the volume and surface area of a box from its dimensions. |
| `4.c` | Solves a quadratic equation using the discriminant. |
| `5.c` | Prints the sizes and limits of every fundamental C data type (`int`, `float`, `double`, etc.). |
| `6.c` | Assigns a letter grade from a percentage. |
| `7.c` | Classifies a polygon by its number of sides. |
| `8.c` | (Commented out) Time conversion sketch. |

### Assignment 2 — Loops and Functions

| File | What it does |
|------|--------------|
| `3.c` | Checks whether a number is prime. |
| `4.c` | Computes x raised to the power n (handles negative exponents). |
| `5.c` | Area calculator for circles, rectangles and triangles. |
| `6.c` | Prints the Fibonacci sequence up to the nth term. |
| `7.c` | Computes the factorial of a number. |
| `8.c` | Checks whether a year is a leap year. |
| `9.c` | Prints the multiplication table for a given number. |

Also includes two PDF write-ups (`1.pdf`, `2.pdf`).

### Assignment 3 — Number Theory and Series

| File | What it does |
|------|--------------|
| `q1.c` | Reverses a number and checks if it is a palindrome. |
| `q2.c` | Prints an arithmetic progression given first term, common difference and length. |
| `q3.c` | Reads n numbers and prints their average. |
| `q4.c` | Computes the Taylor series expansion of sin(x). |
| `q5.c` | Finds all 3-digit multiples of 17 and their sum. |
| `q6.c` | Finds all Armstrong numbers up to n. |
| `q7.c` | Computes the GCD of two numbers. |
| `q8.c` | Checks whether a number is a perfect number. |

### Assignment 4 — Patterns and Nested Loops

| File | What it does |
|------|--------------|
| `q1.c` / `p2a4.c` | Number triangle patterns (ascending and descending). |
| `q3.c` / `p4a4.c` | Hash (`#`) diamond pattern; prints the first n primes. |
| `q5.c` / `p6a4.c` | Counts ordered pairs (i, j) where j is a multiple of i in a range; counts coprime pairs with GCD > 1. |
| `q7.c` / `p8a4.c` | Divisibility pattern using digit sums; counts numbers expressible as a sum of two squares. |

### Assignment 5

Contains a compiled test executable.

## Compiling and running

```bash
gcc a1/1.c -o a1/calc -lm
./a1/calc
```

Most files only need `stdio.h`; a few (`a1/4.c`, `a3/q4.c`, etc.) link against `libm` for `math.h`.
