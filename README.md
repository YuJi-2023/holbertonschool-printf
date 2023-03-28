# C -Customised Printf
Foundations > Low-level programming & Algorithm > Hatching out

---

### Description
Introduction to structures and type definitions in C.

### Requirements
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called main.h
* Don’t forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the _putchar function for this project
---

## Mandatory Tasks

### :white_check_mark: Write a function that produces output according to a format.
* Prototype: int _printf(const char *format, ...);
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
* `c`
* `s`
* `%`
* You don’t have to reproduce the buffer handling of the C library printf function
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers
File(s): [`_printf.c`](./_printf.c)\
Compiled: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

### :white_check_mark: 1. Handle the following conversion specifiers
* `d`
* `i`
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

* Prototype: `int _printf(const char *format, ...);`

File(s): [`_printf.c`](./_printf.c)\
Compiled: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

### :white_check_mark: 2.Create a man page for your function.

* Write a man page for your function
File(s): [`man_3_printf.man`](./man_3_printf.man)\

---

## Author
* **Sourabh Beniwal** - [bsour](github.com/bsour)
* **Yu Ji** -[YuJi-2023](github.com/YuJi-2023)
                                                                                           1,1           Top
