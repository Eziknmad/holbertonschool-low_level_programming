0x08. C - Recursion

This directory is part of the Holberton School low-level programming curriculum. It focuses on recursion in C — a concept where a function calls itself until it reaches a base condition. Every task in this directory demonstrates how recursion replaces loops for solving repetitive problems.

Compilation command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output_name

All code follows the Betty style guide.

FILES AND DESCRIPTIONS

File: 0-puts_recursion.c
Function: void _puts_recursion(char *s);
Description: Prints a string followed by a new line using recursion.
Example:
_puts_recursion("Hello");
Output: Hello

File: 1-print_rev_recursion.c
Function: void _print_rev_recursion(char *s);
Description: Prints a string in reverse using recursion.
Example:
_print_rev_recursion("abc");
Output: cba

File: 2-strlen_recursion.c
Function: int _strlen_recursion(char *s);
Description: Returns the length of a string using recursion.
Example:
_strlen_recursion("Holberton");
Output: 9

File: 3-factorial.c
Function: int factorial(int n);
Description: Returns the factorial of a number using recursion. If n < 0, returns -1.
Example:
factorial(5);
Output: 120

File: 4-pow_recursion.c
Function: int _pow_recursion(int x, int y);
Description: Returns x raised to the power of y using recursion. If y < 0, returns -1.
Example:
_pow_recursion(2, 3);
Output: 8

File: 5-sqrt_recursion.c
Function: int _sqrt_recursion(int n);
Description: Returns the natural square root of a number using recursion. If n does not have a natural square root, returns -1.
Example:
_sqrt_recursion(16);
Output: 4

File: 6-is_prime_number.c
Function: int is_prime_number(int n);
Description: Determines if a number is prime using recursion. Returns 1 if prime, 0 if not.
Example:
is_prime_number(7);
Output: 1

HEADER FILE

File: main.h
Contains all function prototypes used in the recursion project.
Prototypes:
int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);

TEST FILES

Files: main.c, 0-main.c, 1-main.c, 2-main.c, 3-main.c, 4-main.c, 5-main.c, 6-main.c
Each main file tests the corresponding recursion function. Compile and run them to check that your function works as expected.
Example compilation:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-puts_recursion.c _putchar.c -o puts
./puts

ADDITIONAL FILES

File: _putchar.c
Contains the _putchar function used for character output in other files.

File: gitauto.sh
Shell script to automate Git commands (add, commit, and push).
Usage:
./gitauto.sh

File: README.md
Contains a short overview of the recursion project and its objectives.

NOTES

Each .c file represents a separate recursion exercise.
Always compile with the correct main file for testing.
All files must pass Betty style checks using:
betty *.c *.h
Recursion replaces iterative loops by having the function call itself with a smaller input until a stopping point (base case) is reached.

AUTHOR

Project by: Kevin Galarza Arzon
Part of: Holberton School Low-Level Programming
Repository: https://github.com/Eziknmad/holbertonschool-low_level_programming
Directory: recursion

