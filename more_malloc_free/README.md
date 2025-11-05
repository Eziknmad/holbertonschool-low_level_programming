0x0C. C - More malloc, free

This directory is part of the Holberton School low-level programming curriculum. It focuses on advanced usage of malloc, free, and realloc in C, covering memory management for dynamic arrays and string operations.

Compilation command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output_name

All code follows the Betty style guide.

FILES AND DESCRIPTIONS

File: 0-malloc_checked.c
Function: void *malloc_checked(unsigned int b);
Description: Allocates memory using malloc. If malloc fails, the function causes normal process termination with a status value of 98.
Example:
int *ptr = malloc_checked(10 * sizeof(int));

File: 1-string_nconcat.c
Function: char *string_nconcat(char *s1, char *s2, unsigned int n);
Description: Concatenates two strings. The returned pointer points to newly allocated memory. If n is greater than or equal to the length of s2, the entire s2 is used. If malloc fails, returns NULL.
Example:
string_nconcat("Hello", "World", 3);
Output: HelloWor

File: 2-calloc.c
Function: void *_calloc(unsigned int nmemb, unsigned int size);
Description: Allocates memory for an array of nmemb elements of size bytes each and initializes all bytes to 0. Returns NULL if nmemb or size is 0 or if malloc fails.
Example:
int *arr = _calloc(5, sizeof(int));
Creates: [0, 0, 0, 0, 0]

File: 3-array_range.c
Function: int *array_range(int min, int max);
Description: Creates an array of integers containing all values from min (included) to max (included), ordered from min to max. Returns NULL if min > max or if malloc fails.
Example:
array_range(1, 5);
Creates: [1, 2, 3, 4, 5]

ADVANCED TASKS

File: 100-realloc.c
Function: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
Description: Reallocates a memory block using malloc and free. Copies the contents to the new memory space up to the minimum of old_size and new_size. If new_size > old_size, the extra memory is uninitialized. Returns the new pointer.
Example:
ptr = _realloc(ptr, old_size, new_size);

File: 101-mul.c
Program: Multiplies two positive numbers.
Usage: ./mul num1 num2
Description: Uses malloc to handle very large numbers represented as strings. If the number of arguments is incorrect or if either argument contains non-digit characters, prints “Error” and exits with status 98.
Example:
./mul 123 456
Output: 56088

HEADER FILE

File: main.h
Contains all function prototypes used in the project.
Prototypes:
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _isdigit(char *str);
void errors(void);

TEST FILES

Files: 0-main.c, 1-main.c, 2-main.c, 3-main.c
Each main file tests the corresponding function.
Example compilation:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-malloc_checked.c -o malloc_checked
./malloc_checked

ADDITIONAL FILES

File: _putchar.c
Used for character output in some test files.

File: gitauto.sh
Shell script to automate Git operations (add, commit, push).
Usage:
./gitauto.sh

File: README.md
Contains a summary of the project objectives and file descriptions.

NOTES

Each .c file demonstrates dynamic memory allocation and proper memory release.
Always check malloc and calloc return values.
Code must pass Betty checks:
betty *.c *.h

AUTHOR

Project by: Kevin Galarza Arzon
Part of: Holberton School Low-Level Programming
Repository: https://github.com/Eziknmad/holbertonschool-low_level_programming
Directory: more_malloc_free
