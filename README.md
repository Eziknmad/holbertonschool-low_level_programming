Holberton School - Low Level Programming Repository

This repository contains all foundational C programming projects from the Holberton School low-level programming curriculum.  
Each directory covers a specific topic, from basic syntax and compilation to dynamic memory allocation and recursion.

All projects follow the Betty style guide and must compile with:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89

Directory structure and summaries:

--------------------------------------------------------------------------------
0x00. hello_world
Introduces the basics of C programming — preprocessing, compilation, linking, and output.
Key concepts: gcc, printf, puts, putchar, basic scripts.
Example files:
0-preprocessor, 1-compiler, 4-puts.c, 5-printf.c, 6-size.c, 101-quote.c

--------------------------------------------------------------------------------
0x01. variables_if_else_while
Focuses on variables, conditionals, and loops.
Key concepts: if, else, while, relational and logical operators.
Example files:
0-positive_or_negative.c, 1-last_digit.c, 2-print_alphabet.c, 9-print_comb.c

--------------------------------------------------------------------------------
0x02. functions_nested_loops
Introduces user-defined functions and nested loops.
Key concepts: function prototypes, return values, loop nesting.
Example files:
0-putchar.c, 1-alphabet.c, 2-print_alphabet_x10.c, 7-print_last_digit.c

--------------------------------------------------------------------------------
0x03. debugging
Covers the debugging process using print statements and the gdb tool.
Key concepts: identifying errors, debugging methods, code tracing.
Example files:
0-main.c, 1-main.c, 2-largest_number.c, 3-print_remaining_days.c

--------------------------------------------------------------------------------
0x04. more_functions_nested_loops
Builds on loops and functions, focusing on more complex logic structures.
Key concepts: nested loops, conditional printing, arithmetic functions.
Example files:
0-isupper.c, 2-mul.c, 5-more_numbers.c, 10-print_triangle.c, 101-print_number.c

--------------------------------------------------------------------------------
0x05. pointers_arrays_strings
Introduces pointers, arrays, and string manipulation in C.
Key concepts: pointer arithmetic, dereferencing, string iteration.
Example files:
0-reset_to_98.c, 1-swap.c, 5-rev_string.c, 7-puts_half.c

--------------------------------------------------------------------------------
0x06. more_pointers_arrays_strings
Continues work with arrays and pointers, emphasizing multi-dimensional operations.
Key concepts: double pointers, multidimensional arrays, string concatenation.
Example files:
0-strcat.c, 1-strncat.c, 4-rev_array.c, 7-leet.c

--------------------------------------------------------------------------------
0x07. even_more_pointers_arrays_strings
Explores more advanced pointer concepts including pointer to pointer, and 2D arrays.
Key concepts: pointer to pointer, double arrays, memory addresses.
Example files:
0-memset.c, 2-strchr.c, 4-strpbrk.c, 5-strstr.c

--------------------------------------------------------------------------------
0x08. recursion
Teaches recursive function design and how recursion replaces iteration.
Key concepts: base case, recursive call, stack memory.
Example files:
0-puts_recursion.c, 3-factorial.c, 5-sqrt_recursion.c, 6-is_prime_number.c

--------------------------------------------------------------------------------
0x09. static_libraries
Covers creation and usage of static libraries in C.
Key concepts: ar, ranlib, creating and linking .a libraries.
Example files:
libmy.a, create_static_lib.sh, main.h

--------------------------------------------------------------------------------
0x0A. argc_argv
Teaches command-line arguments handling in C.
Key concepts: argc, argv, argument parsing, input validation.
Example files:
0-whatsmyname.c, 3-mul.c, 4-add.c, 100-change.c

--------------------------------------------------------------------------------
0x0B. malloc_free
Introduces dynamic memory allocation using malloc and free.
Key concepts: dynamic arrays, freeing memory, pointer validation.
Example files:
0-create_array.c, 1-strdup.c, 3-alloc_grid.c, 4-free_grid.c

--------------------------------------------------------------------------------
0x0C. more_malloc_free
Expands dynamic memory concepts with realloc and advanced string handling.
Key concepts: calloc, realloc, string_nconcat, integer arrays.
Example files:
0-malloc_checked.c, 2-calloc.c, 3-array_range.c, 101-mul.c

--------------------------------------------------------------------------------
ADDITIONAL FILES

.gitignore – Specifies files ignored by Git.  
README.md – Overview of the repository, its structure, and author information.  
gitauto.sh – Bash script that automates git add, commit, and push.  
_putchar.c – Utility function used in multiple projects.  

--------------------------------------------------------------------------------
COMPILATION STANDARD
All C programs must compile using:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o output

CODE STYLE
All code must conform to the Betty style:
betty-style.pl && betty-doc.pl

EXECUTION
Each main.c file is used for testing the corresponding task.  
To compile and run:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c task_file.c -o output
./output

--------------------------------------------------------------------------------
AUTHOR
Project by: Kevin Galarza Arzon  
Holberton School Low-Level Programming  
Repository: https://github.com/Eziknmad/holbertonschool-low_level_programming
