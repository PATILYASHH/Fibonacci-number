# Fibonacci Series Generator

This program generates the Fibonacci series up to a specified number of terms.

## Usage
1. Compile the program using a C compiler (e.g., GCC).
2. Run the compiled executable.
3. Enter the number of terms for the Fibonacci series when prompted.

## How it works
- The program prompts the user to enter the number of terms for the Fibonacci series.
- It then calculates and prints the Fibonacci series up to the specified number of terms.

## Code Description
The program consists of two functions:
- `fibonacci(int n)`: This function generates the Fibonacci series up to `n` terms.
- `main()`: This function prompts the user to enter the number of terms and calls the `fibonacci()` function.

## Example

Enter the number of terms: 7

Fibonacci series up to 7 terms: 0 1 1 2 3 5 8


## Note
- The program may produce unexpected results for large values of `n` due to integer overflow.
