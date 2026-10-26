*This project has been created as part of the 42 curriculum by maoulad.*
 
# Libft
 
## Description
**Libft** is the first project at 42. The goal is to rewrite a set of standard C library functions from scratch, along with several other utility and linked list functions that can be used as a foundation for future C projects throughout the common core.
 
---
 
### Detailed Description of the Library
 
#### "ft_is" CHARACTER FUNCTIONS
 
| FUNCTION NAME | RETURN TYPE | ARGUMENTS |                                                DESCRIPTION                                                 |
|:-------------:|:-----------:|:---------:|:----------------------------------------------------------------------------------------------------------:|
| ft_isalpha    |     int     |   int c   | checks if the character ***c*** is an alphabet character. ***NOTE***: *THIS INCLUDES LOWERCASE AND UPPERCASE.* |
| ft_isdigit    |     int     |   int c   | checks if the character ***c*** is a number character, goes from **'0'** to **'9'**.                       |
| ft_isalnum    |     int     |   int c   | checks if the character ***c*** is either a number or an alphabet character (e.g. '6', 'a', 'G'...).      |
| ft_isascii    |     int     |   int c   | checks if the character ***c*** is **ASCII**, which goes from *0* to *127*.                               |
| ft_isprint    |     int     |   int c   | checks if the character ***c*** is **PRINTABLE**, which goes from *32* to *126*.                          |
 
---
 
#### "ft_to" CASE FUNCTIONS
 
| FUNCTION NAME | RETURN TYPE | ARGUMENTS |                                   DESCRIPTION                                   |
|:-------------:|:-----------:|:---------:|:-------------------------------------------------------------------------------:|
| ft_toupper    |     int     |   int c   | converts a lowercase letter ***c*** to uppercase. Other characters are unchanged. |
| ft_tolower    |     int     |   int c   | converts an uppercase letter ***c*** to lowercase. Other characters are unchanged. |
 
---
 
#### "ft_mem" MEMORY FUNCTIONS
 
| FUNCTION NAME | RETURN TYPE | ARGUMENTS                                |                                      DESCRIPTION                                       |
|:-------------:|:-----------:|:----------------------------------------:|:--------------------------------------------------------------------------------------:|
| ft_memset     |    void *   | void *b, int c, size_t len               | fills the first ***len*** bytes of memory area ***b*** with the byte ***c***.          |
| ft_bzero      |     void    | void *s, size_t n                        | sets the first ***n*** bytes of ***s*** to zero.                                       |
| ft_memcpy     |    void *   | void *dst, const void *src, size_t n     | copies ***n*** bytes from ***src*** to ***dst***. The memory areas must not overlap.   |
| ft_memmove    |    void *   | void *dst, const void *src, size_t len   | copies ***len*** bytes from ***src*** to ***dst***. Safe when the areas overlap.       |
| ft_memchr     |    void *   | const void *s, int c, size_t n           | locates the first occurrence of byte ***c*** in the first ***n*** bytes of ***s***.    |
| ft_memcmp     |     int     | const void *s1, const void *s2, size_t n | compares the first ***n*** bytes of ***s1*** and ***s2***.                             |
| ft_calloc     |    void *   | size_t count, size_t size                | allocates memory for ***count*** elements of ***size*** bytes, all set to zero.        |
 
---
 
#### "ft_str" STRING FUNCTIONS
 
| FUNCTION NAME | RETURN TYPE | ARGUMENTS                                       |                                          DESCRIPTION                                          |
|:-------------:|:-----------:|:-----------------------------------------------:|:---------------------------------------------------------------------------------------------:|
| ft_strlen     |   size_t    | const char *s                                   | returns the length of the string ***s***, not counting the terminating null byte.             |
| ft_strlcpy    |   size_t    | char *dst, const char *src, size_t size         | copies up to ***size - 1*** characters from ***src*** to ***dst***, null-terminating the result. |
| ft_strlcat    |   size_t    | char *dst, const char *src, size_t size         | appends ***src*** to ***dst*** without exceeding a total length of ***size***.               |
| ft_strchr     |   char *    | const char *s, int c                            | locates the first occurrence of ***c*** in the string ***s***.                                |
| ft_strrchr    |   char *    | const char *s, int c                            | locates the last occurrence of ***c*** in the string ***s***.                                 |
| ft_strncmp    |     int     | const char *s1, const char *s2, size_t n        | compares up to ***n*** characters of ***s1*** and ***s2***.                                   |
| ft_strnstr    |   char *    | const char *big, const char *little, size_t len | locates the first occurrence of ***little*** in ***big***, searching at most ***len*** characters. |
| ft_strdup     |   char *    | const char *s1                                  | returns a newly allocated copy of the string ***s1***.                                        |
| ft_atoi       |     int     | const char *str                                 | converts the initial portion of the string ***str*** to an **int**.                           |
 
---
 
#### ADDITIONAL FUNCTIONS
 
| FUNCTION NAME | RETURN TYPE | ARGUMENTS                                                |                                          DESCRIPTION                                           |
|:-------------:|:-----------:|:--------------------------------------------------------:|:----------------------------------------------------------------------------------------------:|
| ft_substr     |   char *    | char const *s, unsigned int start, size_t len            | returns a new string extracted from ***s***, beginning at ***start*** with a max size of ***len***. |
| ft_strjoin    |   char *    | char const *s1, char const *s2                           | returns a new string which is the concatenation of ***s1*** and ***s2***.                      |
| ft_strtrim    |   char *    | char const *s1, char const *set                          | returns a copy of ***s1*** with the characters in ***set*** removed from both ends.            |
| ft_split      |   char **   | char const *s, char c                                    | splits ***s*** using the delimiter ***c***. Returns a NULL-terminated array of new strings.    |
| ft_itoa       |   char *    | int n                                                    | converts the integer ***n*** to a newly allocated string.                                      |
| ft_strmapi    |   char *    | char const *s, char (*f)(unsigned int, char)             | applies ***f*** to each character of ***s*** and returns a new string of the results.          |
| ft_striteri   |    void     | char *s, void (*f)(unsigned int, char *)                 | applies ***f*** to each character of ***s***, passing its index and its address.               |
 
---
 
#### "ft_put" FILE DESCRIPTOR FUNCTIONS
 
| FUNCTION NAME | RETURN TYPE | ARGUMENTS         |                           DESCRIPTION                            |
|:-------------:|:-----------:|:-----------------:|:----------------------------------------------------------------:|
| ft_putchar_fd |    void     | char c, int fd    | writes the character ***c*** to the file descriptor ***fd***.    |
| ft_putstr_fd  |    void     | char *s, int fd   | writes the string ***s*** to the file descriptor ***fd***.       |
| ft_putendl_fd |    void     | char *s, int fd   | writes the string ***s*** followed by a newline to ***fd***.     |
| ft_putnbr_fd  |    void     | int n, int fd     | writes the integer ***n*** to the file descriptor ***fd***.      |
 
---
 
#### "ft_lst" LINKED LIST FUNCTIONS (BONUS)
 
The list nodes use the following structure:
 
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```
 
| FUNCTION NAME  | RETURN TYPE | ARGUMENTS                                                   |                                         DESCRIPTION                                          |
|:--------------:|:-----------:|:-----------------------------------------------------------:|:--------------------------------------------------------------------------------------------:|
| ft_lstnew      |   t_list *  | void *content                                               | creates a new node with ***content*** and ***next*** set to NULL.                            |
| ft_lstadd_front|    void     | t_list **lst, t_list *new                                   | adds the node ***new*** at the beginning of the list.                                        |
| ft_lstsize     |     int     | t_list *lst                                                 | counts the number of nodes in the list.                                                      |
| ft_lstlast     |   t_list *  | t_list *lst                                                 | returns the last node of the list.                                                           |
| ft_lstadd_back |    void     | t_list **lst, t_list *new                                   | adds the node ***new*** at the end of the list.                                              |
| ft_lstdelone   |    void     | t_list *lst, void (*del)(void *)                            | frees the content of a node with ***del***, then frees the node itself.                      |
| ft_lstclear    |    void     | t_list **lst, void (*del)(void *)                           | deletes and frees the given node and every node after it, then sets the pointer to NULL.     |
| ft_lstiter     |    void     | t_list *lst, void (*f)(void *)                              | applies ***f*** to the content of each node in the list.                                     |
| ft_lstmap      |   t_list *  | t_list *lst, void *(*f)(void *), void (*del)(void *)        | creates a new list by applying ***f*** to each node's content, using ***del*** on failure.   |
 
---
 
## Instructions
 
### Compilation
To compile the library, clone the repository and run `make` at the root directory:
```bash
make
```
To recompile everything:
```bash
make re
```
To remove the object files:
```bash
make clean
```
To remove the object files and the library:
```bash
make fclean
```
 
### Usage
Include the header in your source file and link against the library:
```c
#include "libft.h"
```
```bash
cc main.c -L. -lft -o program
```


## Resources: 

- [GeeksForGeeks.org](https://www.geeksforgeeks.org/)
- [StackOverflow](https://stackoverflow.com/questions)
---
### AI Usage:
- Mainly for explaining and giving edge cases to test against.
