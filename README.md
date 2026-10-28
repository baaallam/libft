*This project has been created as part of the 42 curriculum by
`kbaaalla`{=html}.*

# Libft

## Description

**Libft** is a custom C library developed as part of the 42 curriculum.
Its goal is to recreate a selection of standard C library functions and
build additional utility functions that can be reused in future C
projects.

The project helps strengthen understanding of: - Pointers and memory
addresses. - Strings, arrays, and character handling. - Dynamic memory
allocation with `malloc` and `free`. - Memory manipulation. - Linked
lists and structures (if the bonus part is included). - Writing
reusable, reliable C code.

The library is built as a static archive named `libft.a`.

## Instructions

### Requirements

-   A C compiler, such as `cc` or `gcc`.
-   `make`.
-   The 42 **Norminette** tool, if you want to check compliance with the
    42 coding standard.

### Compile the library

From the root of the repository, run:

``` bash
make
```

This compiles the source files and creates `libft.a`.

### Use the library in a project

Include `libft.h` in your C source file:

``` c
#include "libft.h"
```

Compile your source file together with the library. For example:

``` bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Then run the program:

``` bash
./program
```

Make sure `main.c` is replaced with your own source file if it has a
different name.

### Makefile commands

-   `make`: compile the library.
-   `make clean`: remove object files.
-   `make fclean`: remove object files and the `libft.a` library.
-   `make re`: clean and rebuild the library.


### Check the code

If Norminette is installed, run:

``` bash
norminette
```

You can also compile with strict compiler flags:

``` bash
cc -Wall -Wextra -Werror
```

Run your own tests to check normal inputs, edge cases, and allocation
failures where applicable.

## Resources

### Documentation and references

-   [C standard library reference ---
    cppreference](https://en.cppreference.com/w/c)
-   [The Open Group --- POSIX
    specifications](https://pubs.opengroup.org/onlinepubs/9699919799/)
-   [GNU Compiler Collection (GCC)
    documentation](https://gcc.gnu.org/onlinedocs/)
-   [GNU Make manual](https://www.gnu.org/software/make/manual/)
-   [42 Norminette](https://github.com/42School/norminette)

These references were used as learning and reference material for C
functions, compilation, and project conventions.

### AI usage

AI assistance was used to help organize and write this README and to
clarify programming concepts during development. The project code should
be reviewed and tested by the author, and any AI assistance used
directly for implementation should be described accurately here.

## Author

-   `kbaaalla`{=html} --- 42 student
