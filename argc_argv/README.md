0x0A. C - argc, argv

This directory is part of the Holberton School low-level programming curriculum.  
It focuses on using command-line arguments (`argc` and `argv`) in C programs — understanding how to handle input from the command line and process it properly.

Compilation command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output_name

All files follow the Betty style guide.

FILES AND DESCRIPTIONS

File: 0-whatsmyname.c
Functionality: Prints the name of the program, followed by a new line.
Prototype:
int main(int argc, char *argv[]);
Description: Uses `argv[0]` to print the program’s name. Ignores `argc`.
Example:
./myprogram
Output:
./myprogram

File: 1-args.c
Functionality: Prints the number of arguments passed into the program.
Prototype:
int main(int argc, char *argv[]);
Description: Prints `argc - 1` because the first argument is the program name itself.
Example:
./count one two three
Output:
3

File: 2-args.c
Functionality: Prints all arguments it receives.
Prototype:
int main(int argc, char *argv[]);
Description: Iterates through each argument and prints it on a new line.
Example:
./printargs Hello World Holberton
Output:
./printargs
Hello
World
Holberton

File: 3-mul.c
Functionality: Multiplies two numbers.
Prototype:
int main(int argc, char *argv[]);
Description: Expects exactly two arguments (excluding the program name).  
If the number of arguments is incorrect, prints "Error" and returns 1.
Example:
./mul 3 5
Output:
15
./mul 2
Output:
Error

File: 4-add.c
Functionality: Adds positive numbers.
Prototype:
int main(int argc, char *argv[]);
Description:
- Adds all positive integer arguments.
- If no numbers are passed, prints 0.
- If a non-digit symbol is found, prints “Error” and returns 1.
Example:
./add 1 2 3
Output:
6
./add 5 x
Output:
Error
./add
Output:
0

ADVANCED TASKS

File: 100-change.c
Functionality: Prints the minimum number of coins to make change for an amount of money.
Prototype:
int main(int argc, char *argv[]);
Description:
- Takes one argument (amount in cents).
- Uses the fewest number of coins (25, 10, 5, 2, and 1 cent).
- If the number of arguments is not exactly 1, prints “Error” and returns 1.
Example:
./change 87
Output:
6
(3×25¢, 1×10¢, 0×5¢, 1×2¢, 0×1¢)

HEADER FILE

File: main.h
Contains all function prototypes used in the project.
Prototype examples:
int _putchar(char c);

TEST FILES

Each main file corresponds to its task (0-main.c, 1-main.c, etc.).
Example compilation:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-mul.c -o mul
./mul 3 5

ADDITIONAL FILES

File: _putchar.c
Used for character output where required.

File: gitauto.sh
Shell script for automating Git operations.
Usage:
./gitauto.sh

File: README.md
Contains project description, usage, and author information.

NOTES

- Each file demonstrates the use of command-line arguments in C.
- Programs must handle incorrect input gracefully.
- Always validate user input before performing operations.
- Code must pass Betty checks:
betty *.c *.h

AUTHOR

Project by: Kevin Galarza Arzon  
Part of: Holberton School Low-Level Programming  
Repository: https://github.com/Eziknmad/holbertonschool-low_level_programming  
Directory: argc_argv

