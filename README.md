*This project has been created as part of the 42 curriculum by kbaaalla.*
 
# Libft
 
## Description
 
**Libft** is the first project of the 42 / 1337 Common Core. The goal is to build a personal C static library, `libft.a`, that reimplements a set of standard C library functions, adds extra utility functions, and provides a small linked-list toolkit. The library is reusable in all later C projects of the curriculum.
 
The project trains the following fundamentals:
 
- Pointers and pointer arithmetic
- Memory manipulation and dynamic allocation (`malloc` / `free`)
- String manipulation and null termination
- Function pointers
- Linked lists
- Edge cases, undefined behavior and memory-leak prevention
- Compilation, Makefiles and static libraries (`ar`)
### Library overview
 
All sources are at the root of the repository, one function per `ft_*.c` file, with the single header `libft.h`. No global variables are used, and helper functions are `static`.
 
#### Part 1 - Libc functions
 
Same prototypes and behavior as the originals, with the `ft_` prefix.
 
| Function | Description |
|---|---|
| `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Character classification. Return `1` if the character matches the class, `0` otherwise. |
| `ft_toupper`, `ft_tolower` | Convert a letter to upper or lower case. |
| `ft_strlen` | Length of a string. |
| `ft_memset`, `ft_bzero` | Fill a memory area with a byte, or with zeros. |
| `ft_memcpy`, `ft_memmove` | Copy memory. `ft_memmove` handles overlapping areas. |
| `ft_memchr`, `ft_memcmp` | Search for a byte in memory, compare two memory areas. |
| `ft_strlcpy`, `ft_strlcat` | Size-bounded string copy and concatenation. Return the length they tried to create. |
| `ft_strchr`, `ft_strrchr` | Find the first or last occurrence of a character in a string. |
| `ft_strncmp` | Compare at most `n` characters of two strings. |
| `ft_strnstr` | Find a substring within the first `len` characters of a string. |
| `ft_atoi` | Convert the beginning of a string to an `int`. |
| `ft_calloc` | Allocate zero-initialized memory. If `nmemb` or `size` is 0, returns a unique pointer that can be passed to `free()`. |
| `ft_strdup` | Duplicate a string with `malloc`. |
 
#### Part 2 - Additional functions
 
| Function | Description |
|---|---|
| `ft_substr` | Allocate and return a substring of `s` starting at `start`, with a maximum length `len`. |
| `ft_strjoin` | Allocate and return the concatenation of `s1` and `s2`. |
| `ft_strtrim` | Allocate and return a copy of `s1` with the characters of `set` removed from the beginning and the end. |
| `ft_split` | Split a string with a delimiter character into a NULL-terminated array of allocated strings. |
| `ft_itoa` | Convert an `int` (negatives included) to an allocated string. |
| `ft_strmapi` | Apply `f(index, char)` to each character and return a new allocated string with the results. |
| `ft_striteri` | Apply `f(index, &char)` to each character of a string, modifying it in place. |
| `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Write a character, a string, a string followed by a newline, or an integer to a file descriptor. |
 
#### Part 3 - Linked lists
 
The list uses the following structure, declared in `libft.h`:
 
```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
```
 
| Function | Description |
|---|---|
| `ft_lstnew` | Create a new node with the given content, `next` set to `NULL`. |
| `ft_lstadd_front` | Add a node at the beginning of the list. |
| `ft_lstsize` | Count the nodes of the list. |
| `ft_lstlast` | Return the last node of the list. |
| `ft_lstadd_back` | Add a node at the end of the list. |
| `ft_lstdelone` | Free one node's content with `del`, then free the node itself (not the next one). |
| `ft_lstclear` | Delete and free a node and all its successors, then set the list pointer to `NULL`. |
| `ft_lstiter` | Apply a function to the content of every node. |
| `ft_lstmap` | Build a new list from the results of a function applied to each node's content, cleaning up with `del` if an allocation fails. |
 
## Instructions
 
### Compilation
 
The library is built with `cc` and the flags `-Wall -Wextra -Werror`, and archived with `ar` into `libft.a` at the root of the repository.
 
```bash
make          # build libft.a
make clean    # remove object files
make fclean   # remove object files and libft.a
make re       # rebuild everything
```
 
The Makefile does not relink when nothing has changed.
 
### Usage
 
Include the header in your source file:
 
```c
#include "libft.h"
```
 
Compile your program and link it with the library:
 
```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
./program
```
 
Adjust the `-I` and `-L` paths if the header or the library is in another directory.
 
### Testing
 
Each function should be tested with normal inputs, boundary conditions and invalid cases: empty strings, zero length, exact-fit buffers, `INT_MIN` / `INT_MAX`, overlapping memory, allocation failures, empty and single-node lists. Useful tools:
 
```bash
norminette                                              # 42 coding standard
valgrind --leak-check=full --show-leak-kinds=all ./program   # leaks and invalid accesses
```
 
## Resources
 
### References
 
- [cppreference - C language](https://en.cppreference.com/w/c)
- [Linux manual pages](https://man7.org/linux/man-pages/) (`man 3 strlen`, `man 3 memmove`, `man 3 malloc`, ...)
- [GNU C Library manual](https://www.gnu.org/software/libc/manual/)
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)
- [GNU Make manual](https://www.gnu.org/software/make/manual/)
- [Valgrind documentation](https://valgrind.org/docs/manual/manual.html)
- [Norminette](https://github.com/42School/norminette)
### Use of AI
 
All the functions of the library were written by me. AI (Claude) was used only for these tasks:
 
- **Code review:** after the implementation was finished, to point out possible problems in the source files and `libft.h` (edge cases, NULL handling, leftover test code) and to compare the project against the subject.
- **Documentation:** to help draft this `README.md` so that it follows the structure required by the subject. The content was checked by me against the code and the subject.
AI was not used to write the implementation of the functions.
 