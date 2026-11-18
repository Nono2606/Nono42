This activity has been created as part of the 42 curriculum by nhussene.

The goal of this activity is to make a library that contains a list of functions we re-created and some others are a modified version of an existing function.
We have some restrictions; we can't use existing functions without being told (write(), malloc(), free()). This library will help us in future projects.

We must redo a set of functions from the libc. The functions will have the same prototypes and implement the same behaviors as the originals. They must comply with the way they are defined in their man pages.
• isalpha
• isdigit
• isalnum
• isascii
• isprint
• strlen
• memset
• bzero
• memcpy
• memmove
• strlcpy
• strlcat
• toupper
• tolower
• strchr
• strrchr
• strncmp
• memchr
• memcmp
• strnstr
• atoi
• calloc
• strdup

In this second part, we had to develop a set of functions that are either not in the libc, or thatare part of it but in a different form.
• ft_substr
• ft_strjoin
• ft_strtrim
• ft_split
• ft_itoa
• ft_strmapi
• ft_striteri
• ft_putchar_fd
• ft_putstr_fd
• ft_putendl_fd
• ft_putnbr_fd

We will have to implement functions using a structure in order to manipulate linked lists.
• ft_lstnew
• ft_lstadd_front
• ft_lstsize
• ft_lstlast
• ft_lstadd_back
• ft_lstdelone
• ft_lstclear
• ft_lstiter
• ft_lstmap

For installation and command :
git clone git@github.com:42learners/Common-Core---Libft-89793322-41c6-4758-89d9-ee38652ec40d.git
cd Common-Core---Libft-89793322-41c6-4758-89d9-ee38652ec40d

make : compile objects and library
make clean 	delete objects
make fclean 	clean | delete library
make re : fclean | all

Mostly used the website Koor.fr to see how the functions work and must return; it can sometimes give a setup with a main. Also used OnlineGDB, an online compiler, good for debugging and quick tests.
And most importantly, my peers.
