# Pointers, Arrays & Strings  
This directory is part of the [Holberton School – Low Level Programming](https://github.com/Eziknmad/holbertonschool-low_level_programming) project. It contains exercises and examples focused on pointers, arrays, and strings in C.

## 🗂 Directory Structure  
Each file is a C program solving a specific exercise in pointers, arrays and strings. You’ll find:  
- Use of pointers, pointer arithmetic and double pointers  
- Manipulation of arrays (including 2D arrays)  
- Working with string operations (copying, concatenation, comparison, searching, tokenizing)  
- Memory operations, including dynamic allocation (where applicable)  
- Edge‑case handling, and writing clean, modular C code  

## ✅ Learning Objectives  
By working through these files, you will:  
- Understand how pointers operate in C: pointing to variables, pointer arithmetic, pointers to pointers  
- Manipulate arrays and pass arrays to functions correctly  
- Work with strings (null‑terminated char arrays) effectively: traversing, modifying, copying, comparing  
- Gain familiarity with common C standard library string and memory operations (e.g., `strcpy`, `strcmp`, `strlen`, `memset`, etc)  
- Write safe C code: handle null pointers, proper loops, watch off‑by‑one errors  
- Improve readability, maintainability, and use comments / header documentation  

## 📋 How to Compile & Run  
For each `.c` file in this directory:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <filename>.c -o <output_name>
./<output_name> [arguments if any]

