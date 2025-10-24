# Pointers, Arrays & Strings

This directory contains C programs and functions that explore pointers, arrays, and strings — fundamental concepts in low-level programming.  
Each task builds upon the previous to strengthen understanding of memory, data manipulation, and string operations in C.

---

## 📁 Files and Descriptions

### 🧩 Task 0 – Reset to 98
- `0-98`  
- `0-main.c`  
- `0-reset_to_98.c`  
**Description:** Function that takes a pointer to an `int` and updates the value it points to to 98.

---

### 🔁 Task 1 – Swap Integers
- `1-main.c`  
- `1-strncat`  
- `1-strncat.c`  
- `1-swap`  
- `1-swap.c`  
**Description:** Function `swap_int` swaps the values of two integers.

---

### 📏 Task 2 – String Length
- `2-main.c`  
- `2-strlen`  
- `2-strlen.c`  
- `2-strncpy`  
- `2-strncpy.c`  
**Description:** Function `_strlen` returns the length of a string.  
**Extra:** Implementation of `_strncpy` copies a string up to `n` bytes.

---

### 🖨️ Task 3 – Print String
- `3-main.c`  
- `3-puts`  
- `3-puts.c`  
- `3-strcmp`  
- `3-strcmp.c`  
**Description:** Function `_puts` prints a string followed by a newline.  
**Extra:** `_strcmp` compares two strings lexicographically.

---

### 🔄 Task 4 – Reverse a String / Array
- `4-main.c`  
- `4-print_rev`  
- `4-print_rev.c`  
- `4-rev_array.c`  
**Description:**  
Functions that print a string in reverse and reverse the contents of an integer array.

---

### 🔤 Task 5 – Reverse and Uppercase
- `5-main.c`  
- `5-rev_string`  
- `5-rev_string.c`  
- `5-string_toupper`  
- `5-string_toupper.c`  
**Description:**  
- `rev_string` reverses a string in place.  
- `string_toupper` converts lowercase letters of a string to uppercase.

---

### ✨ Task 6 – Capitalize Words
- `6-cap`  
- `6-cap_string.c`  
- `6-main.c`  
- `6-puts2`  
- `6-puts2.c`  
**Description:**  
- `cap_string` capitalizes all words of a string.  
- `puts2` prints every other character of a string.

---

### 💬 Task 7 – Print Half / Encode to 1337
- `7-1337`  
- `7-leet.c`  
- `7-main.c`  
- `7-puts_half`  
- `7-puts_half.c`  
**Description:**  
- `puts_half` prints the second half of a string.  
- `leet` encodes a string into 1337 (leet-speak).

---

### 🧮 Task 8 – Print Array Elements
- `8-main.c`  
- `8-print_array`  
- `8-print_array.c`  
**Description:** Function that prints `n` elements of an array of integers.

---

### 🧷 Task 9 – Copy a String
- `9-main.c`  
- `9-strcpy`  
- `9-strcpy.c`  
**Description:** Function `_strcpy` copies the string from `src` to `dest`.

---

### 🔢 Task 10 – Convert String to Integer
- `100-atoi`  
- `100-atoi.c`  
- `100-main.c`  
**Description:** Function `_atoi` converts a string into an integer.

---

## 🧰 Utility Files

- `_putchar.c` — Custom implementation of `_putchar` used by several functions.  
- `main.h` — Header file containing all function prototypes.  
- `gitauto.sh` — Helper script for automating Git commits and pushes.  
- `00-main.c`, `01-main.c`, `02-main.c`, `03-main.c`, `04-main.c`, `05-main.c`, `06-main.c`, `07-main.c` — Additional test files for each function.  

---

## ⚙️ Compilation

Use the following flags to compile any file in this directory:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> -o <output>
