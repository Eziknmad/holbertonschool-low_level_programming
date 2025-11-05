0x0B. C - malloc, free

This directory is part of the Holberton School low-level programming curriculum. It focuses on using malloc and free for dynamic memory allocation in C. Each file shows how to allocate, manipulate, and release memory properly.

Compilation command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output_name

All code follows the Betty style guide.

FILES AND DESCRIPTIONS

File: 0-create_array.c
Function: char *create_array(unsigned int size, char c);
Description: Creates an array of chars and initializes it with a specific char. Returns NULL if size = 0 or if malloc fails.
Example:
create_array(5, 'H');
Output: HHHHH

File: 1-strdup.c
Function: char *_strdup(char *str);
Description: Returns a pointer to a newly allocated space in memory which contains a copy of the string given as a parameter. Returns NULL if str = NULL or if malloc fails.
Example:
_strdup("Hello");
Output: Hello (newly allocated copy)

File: 2-str_concat.c
Function: char *str_concat(char *s1, char *s2);
Description: Concatenates two strings into newly allocated memory. If NULL is passed, treat it as an empty string.
Example:
str_concat("Hello", "World");
Output: HelloWorld

File: 3-alloc_grid.c
Function: int **alloc_grid(int width, int height);
Description: Returns a pointer to a 2D array of integers. Each element of the grid is initialized to 0. Returns NULL if width or height <= 0 or if malloc fails.
Example:
alloc_grid(2, 3);
Creates:
0 0
0 0
0 0

File: 4-free_grid.c
Function: void free_grid(int **grid, int height);
Description: Frees a 2D grid previously created by alloc_grid.
Usage:
free_grid(grid, height);

File: main.h
Contains all prototypes for malloc and free-related functions.
Prototypes:
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

TEST FILES

Files: 0-main.c, 1-main.c, 2-main.c, 3-main.c, 4-main.c
Each main file tests its corresponding function.
Example compilation:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-create_array.c -o create_array
./create_array

ADDITIONAL FILES

File: _putchar.c
Used for character output in testing (if applicable).

File: README.md
Contains a summary of the malloc and free project and learning objectives.

File: gitauto.sh
Shell script to automate git add, commit, and push operations.
Usage:
./gitauto.sh

NOTES

Each .c file demonstrates a key concept of dynamic memory allocation using malloc and free.
Always release memory after use to avoid leaks.
Code must pass Betty style checks:
betty *.c *.h

AUTHOR

Project by: Kevin Galarza Arzon
Part of: Holberton School Low-Level Programming
Repository: https://github.com/Eziknmad/holbertonschool-low_level_programming
Directory: malloc_free

