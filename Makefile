# A simple Makefile to complie the sourse code
# $@ target rule name
# $^ all prerequisites
# % pattern rule matching operator
# %.o all object files
# %.c all src files
# $< prerequisite name

CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
SRC=ft_isascii.c ft_memmove.c ft_strlcpy.c ft_substr.c ft_atoi.c \
	ft_isdigit.c ft_memset.c ft_strlen.c ft_tolower.c ft_bzero.c \
	ft_isprint.c ft_strchr.c ft_strncmp.c ft_toupper.c ft_calloc.c \
	ft_memchr.c ft_strdup.c ft_strncpy.c ft_isalnum.c ft_memcmp.c \
	ft_strjoin.c ft_strnstr.c ft_isalpha.c ft_memcpy.c ft_strlcat.c \
	ft_strrchr.c
# it will exc all which will change all .c to .o files
OBJECT=$(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJECT)
	ar -c -r -s $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -g3 -c $< -o $@  

clean:
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re fclean clean %.o all 