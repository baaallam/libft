*This project has been created as part of the 42 curriculum by kbaaalla.*

# Libft

## Description

**Libft** is a custom C library developed as part of the 42 curriculum (1337). The goal is to recreate useful functions from the C standard library and build additional utilities that can be reused in future C projects.

Implementing these functions helps develop a deeper understanding of:
- C strings and character handling
- Memory manipulation and pointer arithmetic
- Dynamic memory allocation and deallocation
- Buffer sizes, null terminators, and boundary conditions
- Function pointers and callback functions
- Linked lists and basic data structures
- Compilation, static libraries, and Makefiles

The library is built as a static archive named `libft.a`. Its functions use the `ft_` prefix to distinguish them from standard-library functions.

> **Project note:** Update this README so it accurately reflects the functions and bonus features you have actually implemented and tested.

## Contents

- [Requirements](#requirements)
- [Build and instructions](#build-and-instructions)
- [Using the library](#using-the-library)
- [Library reference](#library-reference)
  - [Part 1 — Libc functions](#part-1--libc-functions)
  - [Part 2 — Additional functions](#part-2--additional-functions)
  - [Bonus — Linked-list functions](#bonus--linked-list-functions)
- [Implementation and design notes](#implementation-and-design-notes)
- [Testing](#testing)
- [Resources](#resources)
- [Author](#author)

## Requirements

The project is written in C and is intended to follow the 42 Norm.

- A C compiler available as `cc`
- `make`
- `ar`, for creating the static library
- A Unix-like development environment is recommended

The project subject requires compilation with `-Wall -Wextra -Werror`. The Makefile should provide at least `all`, `clean`, `fclean`, and `re` rules, and should avoid unnecessary relinking.

## Build and instructions

Run these commands from the root of the repository.

### Build the library

```sh
make
```

This should compile the project and create `libft.a` at the repository root.

### Remove object files

```sh
make clean
```

### Remove object files and the library

```sh
make fclean
```

### Rebuild from scratch

```sh
make re
```

### Expected output

After a successful build, the repository should contain the static library:

```text
libft.a
```

If the build fails, read the compiler or Norminette output, correct the reported issues, and rebuild.

## Using the library

To use Libft in another C project:

1. Include `libft.h` in the source file that calls the library functions.
2. Make sure `libft.a` is available to the compiler and linker.
3. Link the static library when compiling your program.

For example, a program using `ft_strlen` can be compiled with a command of this general form:

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Here, `-L.` tells the linker to search the current directory for libraries, and `-lft` links `libft.a`. The file `main.c` must include `libft.h`, and the function must exist in the version of the library you built.

If you compile source files and the library from different directories, adjust the include and library search paths accordingly.

## Library reference

The following sections describe the functions specified for the Libft project. Keep the lists below synchronized with the functions present in your repository.

### Part 1 — Libc functions

These functions reproduce the behavior of selected C library functions, using the `ft_` prefix.

#### Character checks and conversion

| Function | Purpose |
|---|---|
| `ft_isalpha` | Checks whether a character is an alphabetic letter. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is alphabetic or numeric. |
| `ft_isascii` | Checks whether a value belongs to the ASCII range. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase when applicable. |
| `ft_tolower` | Converts an uppercase letter to lowercase when applicable. |

For the character-classification functions, the project subject specifies returning `1` when the character matches the tested class and `0` otherwise.

#### String functions

| Function | Purpose |
|---|---|
| `ft_strlen` | Returns the length of a string, excluding its terminating null byte. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares up to a specified number of characters from two strings. |
| `ft_strlcpy` | Copies a string into a destination buffer of a specified size. |
| `ft_strlcat` | Appends a string to a destination buffer of a specified size. |
| `ft_strnstr` | Searches for a substring within a limited length of a string. |
| `ft_strdup` | Allocates and returns a duplicate of a string. |
| `ft_atoi` | Converts the initial numeric portion of a string to an integer. |

#### Memory functions

| Function | Purpose |
|---|---|
| `ft_memset` | Fills a memory region with a specified byte value. |
| `ft_bzero` | Sets a specified number of bytes to zero. |
| `ft_memcpy` | Copies a specified number of bytes between non-overlapping memory regions. |
| `ft_memmove` | Copies bytes while supporting overlapping memory regions. |
| `ft_memchr` | Searches a memory region for a byte value. |
| `ft_memcmp` | Compares two memory regions byte by byte. |
| `ft_calloc` | Allocates space for an array and initializes its bytes to zero. |

### Part 2 — Additional functions

These functions provide useful string, conversion, and output utilities that are not all available in the same form in the C standard library.

| Function | Purpose |
|---|---|
| `ft_substr` | Allocates a substring beginning at a specified index, up to a maximum length. |
| `ft_strjoin` | Allocates a new string containing two strings joined together. |
| `ft_strtrim` | Removes characters from a specified set from the beginning and end of a string. |
| `ft_split` | Splits a string into separately allocated strings using a delimiter character. The returned array is terminated by a null pointer. |
| `ft_itoa` | Converts an integer to a string representation. |
| `ft_strmapi` | Creates a new string by applying a function to each character and its index. |
| `ft_striteri` | Applies a function to each character in a string, passing the character's index and address. |
| `ft_putchar_fd` | Writes one character to a specified file descriptor. |
| `ft_putstr_fd` | Writes a string to a specified file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a specified file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a specified file descriptor. |

### Bonus — Linked-list functions

The bonus part introduces a singly linked list. The subject defines the `t_list` node with two members:

- `content`: a `void *` pointer to the node's content
- `next`: a pointer to the next node, or `NULL` for the last node

| Function | Purpose |
|---|---|
| `ft_lstnew` | Allocates a node, stores the supplied content pointer, and initializes `next` to `NULL`. |
| `ft_lstadd_front` | Adds a node at the beginning of a list. |
| `ft_lstsize` | Counts the nodes in a list. |
| `ft_lstlast` | Returns the last node in a list. |
| `ft_lstadd_back` | Adds a node at the end of a list. |
| `ft_lstdelone` | Deletes one node using a supplied content-deletion function, then frees the node itself. |
| `ft_lstclear` | Deletes a node and its successors, frees them, and sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies a function to the content of every node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

The bonus functions should be included in this README only if the bonus part is part of your submitted implementation.

## Implementation and design notes

### Memory management

Functions that allocate memory must handle allocation failure according to their required contract. Every allocation should have a clear ownership and lifetime, and callers should free returned heap memory when they no longer need it.

In particular:
- `ft_calloc` must check that the requested element count and element size can be multiplied without `size_t` overflow before relying on the total size.
- `ft_split` allocates the array and its strings separately. If an allocation fails partway through, previously allocated strings and the array must be released.
- `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, and `ft_itoa` return newly allocated strings, or `NULL` when allocation fails.
- `ft_lstclear` and related list operations must follow their ownership rules to avoid leaks, double frees, or invalid accesses.

### String and buffer boundaries

C strings end with a null byte (`'\\0'`). When copying or constructing strings, account for the space needed for this terminator. Functions that accept a buffer size must respect that size and handle boundary cases carefully.

### Overlapping memory

`ft_memcpy` is intended for non-overlapping source and destination regions. `ft_memmove` is designed to support overlapping regions and must choose a safe copy direction when the regions overlap.

### Static library

The project uses `ar` to create `libft.a`. The library can then be linked into other C programs without recompiling every Libft source file for each use.

## Testing

Create small test programs to check normal cases, boundary cases, and failure conditions. Testing is particularly useful for preparing for peer evaluation and explaining your implementation choices.

Suggested cases include:

- Empty strings and empty input
- Null terminators and searches for `\\0`
- Zero-length memory operations
- Copying when source and destination overlap
- Strings with leading, trailing, or repeated delimiters for `ft_split`
- Negative numbers and the minimum representable `int` for `ft_itoa`
- Allocation failures and cleanup paths
- Empty lists, one-node lists, and multi-node lists for the bonus functions

You can use Norminette to check compliance with the 42 Norm, and compiler warnings should be treated as errors under the required flags.

## Resources

The following resources are useful for understanding the functions and tools involved:

- **Libft project subject (42):** the project specification supplied by your campus. Use it as the source of truth for required prototypes, return values, and edge-case behavior.
- **Manual pages:** consult the relevant `man` pages for the original function contracts, such as `man strlen`, `man memcpy`, `man memmove`, `man calloc`, and `man atoi`.
- **C language reference:** https://en.cppreference.com/w/c
- **GNU C Library manual:** https://www.gnu.org/software/libc/manual/
- **Compiler documentation:** https://gcc.gnu.org/onlinedocs/ (useful for GCC options and diagnostics; your project may compile with `cc`).
- **`ar` documentation:** https://sourceware.org/binutils/docs/binutils/ar.html
- **Norminette:** use the Norminette tool and the rules provided by your campus to check formatting and project conventions.

### AI usage disclosure

The 42 Libft subject asks students to describe how AI was used, including the tasks and parts of the project involved. Edit the following statement so it truthfully reflects your own workflow:

> AI assistance was used for conceptual explanations of C memory handling, pointers, string functions, allocation behavior, debugging strategies, and README organization. Any AI-assisted explanations or suggestions were reviewed against the project subject and relevant documentation. The implementation, testing, and final verification of each function should be described according to the work actually performed by the author.

Do not claim that AI was used only for a particular task—or that no code was generated—unless that accurately describes your process. Make this disclosure specific to your actual use of AI.

## Author

- **42 login:** `kbaaalla`
- **School / campus:** 1337 Rabat
- **Repository:** `https://github.com/baaallam/libft.git`

---