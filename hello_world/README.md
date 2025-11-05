0x00. C - Hello, World

This directory is part of the Holberton School low-level programming curriculum.  
It introduces the basics of programming in C — compilation, syntax, comments, printf, puts, and putchar.

Compilation command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output_name

All files follow the Betty style guide.

FILES AND DESCRIPTIONS

File: 0-preprocessor
Description: A script that runs a C file through the preprocessor and saves the result into another file.
Usage:
./0-preprocessor
Output file: c (contains preprocessed code)

File: 1-compiler
Description: A script that compiles a C file but does not link it.
Usage:
./1-compiler
Output file: main.o (object file)

File: 2-assembler
Description: A script that generates the assembly code of a C file and saves it in an output file.
Usage:
./2-assembler
Output file: main.s (assembly code)

File: 3-name
Description: A script that compiles a C file and creates an executable named `cisfun`.
Usage:
./3-name
Output file: cisfun

File: 4-puts.c
Functionality: Prints a string using the `puts` function, followed by a new line.
Prototype:
int main(void);
Description: Demonstrates usage of puts() to display a message.
Example output:
"Programming is like building a multilingual puzzle"

File: 5-printf.c
Functionality: Prints a string using the `printf` function, followed by a new line.
Prototype:
int main(void);
Description: Demonstrates formatted output with printf().
Example output:
with proper grammar, but the outcome is a piece of art,

File: 6-size.c
Functionality: Prints the size of various types on the computer it is compiled and run on.
Prototype:
int main(void);
Example output:
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)

ADVANCED TASKS

File: 100-intel
Description: A script that generates the assembly code (Intel syntax) of a C file and saves it in an output file.
Usage:
./100-intel
Output file: main.s (Intel syntax assembly)

File: 101-quote.c
Functionality: Prints a message to the standard error using the write() function, not printf or puts.
Prototype:
int main(void);
Example output:
and that piece of art is useful" - Dora Korpar, 2015-10-19
Return value: 1

HEADER FILE

File: main.h
Contains all function prototypes (if used across multiple files).

ADDITIONAL FILES

File: _putchar.c
Used for character output in some test files.

File: gitauto.sh
Shell script for automating Git add, commit, and push operations.
Usage:
./gitauto.sh

File: README.md
Contains an overview of the project, compilation examples, and author information.

NOTES

- This project introduces C basics: compiling, linking, and printing text.
- Each script begins with `#!/bin/bash` and must be executable (`chmod u+x filename`).
- All C files must end with a newline and return 0 from main.
- Check code with:
betty *.c *.h

AUTHOR

Project by: Kevin Galarza Arzon  
Part of: Holberton School Low-Level Programming  
Repository: https://github.com/Eziknmad/holbertonschool-low_level_programming  
Directory: hello_world

