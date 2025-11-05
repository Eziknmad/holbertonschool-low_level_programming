0x04. C - More functions, more nested loops

This directory is part of the Holberton School low-level programming curriculum.  
It focuses on building upon previous knowledge of loops and functions, introducing more complex logic and nested structures in C.

Compilation command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output_name

All code follows the Betty style guide.

FILES AND DESCRIPTIONS

File: 0-isupper.c
Function: int _isupper(int c);
Description: Checks for uppercase character.
Returns 1 if c is uppercase, 0 otherwise.
Example:
_isupper('A') → 1  
_isupper('a') → 0

File: 1-isdigit.c
Function: int _isdigit(int c);
Description: Checks for a digit (0 through 9).
Returns 1 if c is a digit, 0 otherwise.
Example:
_isdigit('5') → 1  
_isdigit('x') → 0

File: 2-mul.c
Function: int mul(int a, int b);
Description: Multiplies two integers and returns the result.
Example:
mul(2, 3) → 6

File: 3-print_numbers.c
Function: void print_numbers(void);
Description: Prints the numbers from 0 to 9, followed by a new line.
Uses _putchar function only twice.

File: 4-print_most_numbers.c
Function: void print_most_numbers(void);
Description: Prints the numbers from 0 to 9, excluding 2 and 4, followed by a new line.

File: 5-more_numbers.c
Function: void more_numbers(void);
Description: Prints 10 times the numbers from 0 to 14, followed by a new line.

File: 6-print_line.c
Function: void print_line(int n);
Description: Draws a straight line in the terminal using the character `_`.
If n is 0 or less, prints only a newline.

File: 7-print_diagonal.c
Function: void print_diagonal(int n);
Description: Draws a diagonal line in the terminal using the character `\`.
If n is 0 or less, prints only a newline.

File: 8-print_square.c
Function: void print_square(int size);
Description: Prints a square of the character `#`.
If size is 0 or less, prints a newline.
Example (size = 3):
###
###
###

File: 9-fizz_buzz.c
Program: int main(void);
Description: Prints numbers from 1 to 100.
- Multiples of 3 print “Fizz”
- Multiples of 5 print “Buzz”
- Multiples of both print “FizzBuzz”
Example:
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz ...

File: 10-print_triangle.c
Function: void print_triangle(int size);
Description: Prints a right triangle of `#` characters.
If size is 0 or less, prints a newline.
Example (size = 4):
   #
  ##
 ###
####

ADVANCED TASKS

File: 100-prime_factor.c
Program: int main(void);
Description: Finds and prints the largest prime factor of the number 612852475143, followed by a new line.

File: 101-print_number.c
Function: void print_number(int n);
Description: Prints an integer using only _putchar, without using long, arrays, or pointers.

HEADER FILE

File: main.h
Contains all prototypes for the functions used in this project:
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);

TEST FILES

Files: 0-main.c, 1-main.c, ..., 10-main.c
Each file tests its corresponding function.
Example compilation:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c 2-mul.c -o mul
./mul

ADDITIONAL FILES

File: _putchar.c
Used to print characters in other functions.

File: gitauto.sh
Shell script to automate Git add, commit, and push commands.
Usage:
./gitauto.sh

File: README.md
Contains project overview and file explanations.

NOTES

- Each file demonstrates function creation and nested loop usage.
- Avoid using printf or standard library functions for output.
- All code must pass the Betty style checks:
betty *.c *.h

AUTHOR

Project by: Kevin Galarza Arzon  
Part of: Holberton School Low-Level Programming  
Repository: https://github.com/Eziknmad/holbertonschool-low_level_programming  
Directory: more_functions_nested_loops

