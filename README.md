<h1 align="center">:books: Libft Project</h1>
<p align="center">This is a repo of first 42cursus development project that consists of recreating C library with functions will be used in future projects throughout the course.</p>

## Functions made in this project:

### from `<ctype.h>`

- [`ft_isalpha`](libft-v2/ft_isalpha.c)	- checks for an alphabetic character.
- [`ft_isdigit`](libft-v2/ft_isdigit.c)	- check for a digit (0 through 9).
- [`ft_isalnum`](libft-v2/ft_isalnum.c)	- checks for an alphanumeric character.
- [`ft_isascii`](libft-v2/ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [`ft_isprint`](libft-v2/ft_isprint.c)	- checks for any printable character.
- [`ft_toupper`](libft-v2/ft_toupper.c)	- convert char to uppercase.
- [`ft_tolower`](libft-v2/ft_tolower.c)	- convert char to lowercase.

### from `<string.h>`

- [`ft_strlen`](libft-v2/ft_strlen.c)	- calculate the length of a string.
- [`ft_memset`](libft-v2/ft_memset.c)	- fill memory with a constant byte.
- [`ft_bzero`](libft-v2/ft_bzero.c)	- zero a byte string.
- [`ft_memcpy`](libft-v2/ft_memcpy.c)	- copy memory area.
- [`ft_memmove`](libft-v2/ft_memmove.c)	- copy memory area.
- [`ft_strlcpy`](libft-v2s/ft_strlcpy.c)	- copy string to a specific size.
- [`ft_strlcat`](libft-v2s/ft_strlcat.c)	- concatenate a string to a specific size.
- [`ft_strchr`](libft-v2/ft_strchr.c)	- locate character in a string.
- [`ft_strrchr`](libft-v2/ft_strrchr.c)	- locate character in a string.
- [`ft_strncmp`](libft-v2/ft_strncmp.c)	- compare two strings.
- [`ft_memchr`](libft-v2/ft_memchr.c)	- scan memory for a character.
- [`ft_memcmp`](libft-v2/ft_memcmp.c)	- compare memory areas.
- [`ft_strnstr`](libft-v2/ft_strnstr.c)	- locate a substring in a string.
- [`ft_strdup`](libft-v2/ft_strdup.c)	- creates a duplicate for the string passed as a parameter.

### from `<stdlib.h>`
- [`ft_atoi`](libft-v2/ft_atoi.c)	- convert a string to an integer.
- [`ft_calloc`](libft-v2/ft_calloc.c)	- allocates memory and sets its bytes' values to 0.

### Non-standard functions
- [`ft_substr`](libft-v2/ft_substr.c)	- returns a substring from a string.
- [`ft_strjoin`](libft-v2/ft_strjoin.c)	- concatenates two strings.
- [`ft_strtrim`](libft-v2/ft_strtrim.c)	- trims the beginning and end of a string with a specific set of chars.
- [`ft_split`](libft-v2/ft_split.c)	- splits a string using a char as parameter.
- [`ft_itoa`](libft-v2/ft_itoa.c)	- converts a number into a string.
- [`ft_strmapi`](libft-v2/ft_strmapi.c)	- applies a function to each character of a string.
- [`ft_striteri`](libft-v2/ft_striteri.c)	- applies a function to each character of a string.
- [`ft_putchar_fd`](libft-v2/ft_putchar_fd.c)	- output a char to a file descriptor.
- [`ft_putstr_fd`](libft-v2/ft_putstr_fd.c)	- output a string to a file descriptor.
- [`ft_putendl_fd`](libft-v2/ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [`ft_putnbr_fd`](libft-v2/ft_putnbr_fd.c)	- output a number to a file descriptor.
