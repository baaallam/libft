# Libft

> My own C library — reimplementing essential functions from the C standard library and building additional utilities from scratch.

## 👤 Author

- **Login:** `kbaaalla`
- **School:** 1337
- **Project:** Libft
- **Language:** C

---

## 📖 About the Project

**Libft** is one of the first projects in the 42 / 1337 Common Core curriculum.

The goal is to create a personal C library by reimplementing standard C library functions and developing additional utility functions.

Instead of relying entirely on existing library functions, this project requires understanding how they work internally and recreating their behavior.

The project focuses on fundamental C programming concepts:

- Memory management and dynamic allocation.
- Pointers and pointer arithmetic.
- String manipulation.
- Memory manipulation.
- Type conversions.
- Function pointers.
- Data structures and linked lists.
- Error handling and edge cases.

The final result is a reusable static library named `libft.a`, which can be included in future C projects.

---

## 🎯 Project Objectives

The main objectives of this project are to:

1. Understand how standard C library functions work.
2. Develop a deeper understanding of pointers and memory.
3. Learn how to allocate and free memory safely.
4. Handle edge cases and prevent undefined behavior.
5. Write clean, modular code that follows the 42 Norm.
6. Understand compilation, static libraries, and Makefiles.
7. Build a reusable library for future projects.

---

## 🧩 Project Structure

The project is organized into three functional groups, all belonging to the main Libft deliverable.

### Part 1 — Libc Functions

Reimplementations of standard C library functions.

**Character checking and conversion**

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

**Memory manipulation**

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`

**String manipulation**

- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strdup`

**Conversions and allocation**

- `ft_atoi`
- `ft_calloc`

### Part 2 — Additional Functions

Utility functions that extend the library.

**String manipulation**

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`

**File descriptor output**

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Part 3 — Linked Lists

Implementation of a singly linked list using the `t_list` structure.

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

**Linked list functions**

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

---

## ⚙️ Compilation

The project uses a Makefile to compile all required source files and generate the static library, including the linked-list functions.

### Compile the library

```bash
make
```

### Remove object files

```bash
make clean
```

### Remove object files and the library

```bash
make fclean
```

### Recompile everything

```bash
make re
```

After successful compilation, the static library file should be:

```text
libft.a
```

---

## 🚀 How to Use the Library

Include the library header in your C source file:

```c
#include "libft.h"
```

Compile your program and link it with `libft.a`:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Run the executable:

```bash
./program
```

If your header or library is in another directory, adjust the include and library paths accordingly.

---

## 🧪 Testing and Debugging

Testing is an important part of this project. Each function should be tested with normal inputs, boundary conditions, and invalid cases where applicable.

### Useful Tools

**Norminette**

Check whether the source files follow the 42 coding standard.

```bash
norminette
```

**Valgrind**

Detect memory leaks and invalid memory accesses.

```bash
valgrind --leak-check=full --show-leak-kinds=all ./program
```

**Compiler warnings**

Compile with strict warning flags:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

**Makefile debugging**

Inspect how Make decides which targets need rebuilding:

```bash
make --debug
```

### Important Test Cases

- Empty strings.
- Zero-length operations.
- Null terminators.
- Exact-fit buffers.
- Truncated strings.
- Maximum and minimum integer values.
- Allocation failures.
- Overlapping memory regions.
- Empty linked lists.
- Single-node linked lists.
- Memory cleanup and ownership.

---

## 📚 Learning Resources

The following resources are useful for understanding C, memory management, standard library behavior, and the tools used throughout the project.

### C Documentation

- [cppreference — C Language](https://en.cppreference.com/w/c)
- [GNU C Reference Manual](https://www.gnu.org/software/gnu-c-manual/)
- [Linux Manual Pages](https://man7.org/linux/man-pages/)

### Function Documentation

Use the terminal to read manual pages for standard functions:

```bash
man 3 strlen
man 3 memcpy
man 3 memmove
man 3 strncmp
man 3 malloc
```

For additional details, consult the relevant manual page available on your operating system.

### Memory Management

- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)
- [Valgrind Documentation](https://valgrind.org/docs/manual/manual.html)

### Compilation and Makefiles

- [GNU Make Manual](https://www.gnu.org/software/make/manual/)
- [Makefile Tutorial](https://makefiletutorial.com/)

### 42 / 1337 Resources

- [42 School](https://42.fr/)
- [Norminette](https://github.com/42School/norminette)
- [Francinette — Libft Testing](https://github.com/xicodomingues/francinette)

*Note: Third-party testers are useful for additional validation, but they do not replace the official project subject or evaluation requirements.*

---

## 🧠 Key Concepts Learned

This project provides practical experience with:

| Concept | What it teaches |
|---|---|
| Pointers | Addresses, dereferencing, pointer arithmetic |
| Memory | Bytes, memory layout, and valid memory access |
| `malloc` / `free` | Dynamic allocation and memory ownership |
| Strings | Null termination and bounded operations |
| Function pointers | Passing functions as arguments |
| Structures | Organizing related data |
| Linked lists | Dynamic data structures and node traversal |
| Makefiles | Automated compilation and dependency management |
| Static libraries | Creating and linking reusable compiled code |

---

## 🏁 Final Goal

The goal is not simply to make the functions pass tests.

It is to understand their behavior, memory requirements, edge cases, and implementation logic well enough to build reliable C programs independently.

**Libft is the foundation for the projects that follow in the 42 / 1337 curriculum.**

---

*Developed by `kbaaalla` — 1337 | 42 Network*