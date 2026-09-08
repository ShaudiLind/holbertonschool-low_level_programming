Purpose of this Project
The primary goal of this project is to understand how the operating system passes information to a C program at the moment of execution. Specifically, this project focuses on:

Understanding main arguments: Learning how to access command-line arguments using the argc (argument count) and argv (argument vector) parameters in the main function.
Memory and Strings: Understanding that argv is an array of strings (pointers to characters) and that argv[0] always represents the name of the program itself.
Compilation and Safety: Practicing how to handle unused variables using (void) or __attribute__((unused)) to comply with strict compilation flags like -Wall -Werror -Wextra -pedantic.
Execution Flow: Learning how to manipulate program input directly from the terminal, which is the foundation for creating CLI (Command Line Interface) tools.

(Ubuntu 20.04 LTS) and the compilation flags (e.g., -Wall -Werror -Wextra -pedantic -std=gnu89).

Compiler:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> -o <executable>).

[Milenys/shaudi_lind]
