This proyect focuses on the implementation and understanding of variadic functions in the C programming language. 

Objectives:
Understanding what variadic functions are and how they work
Learning to use stdarg.h and its associated macros: va_start,va_arg, and va_end.
Applying the const type qualifier correctly. 

Requierements:
Allowed Editors: vi, vim, emacs.
Compilation: Compiled on Ubuntu 20.04 LTS using gcc with the flags -Wall -Werror -Wextra -pedantic -std=gnu89.
Coding Style: All code must adhere to the Betty coding style.
Standard Library: No standard library functions (like printf, malloc, etc.) are allowed, except for those specifically permitted by the project instructions (stdarg.h macros and _putchar).
Formatting: All files must end with a new line.

va_list (The Pointer): This is a special type defined in <stdarg.h>.
Think of it as a pointer that "walks" through the list of extra arguments you passed.

va_start (The Starting Point): This macro initializes your va_list.
You pass it the va_list variable and the name of the last fixed parameter.
This tells the program where the "extra" arguments begin in memory.

va_arg (The Grabber): This macro is how you actually retrieve the data.

va_end (The Cleanup): When you are done, you call this to clean up the pointer. 
It's essentially "good housekeeping" to prevent memory issues or undefined behavior.


Included Files
File Name	Description
variadic_functions.h	Header file containing all function prototypes.
0-sum_them_all.c	Function that returns the sum of all its parameters.


Author
[Milenys/shaudi_lind]

