#ifndef __LIBFT_H__
#define __LIBFT_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* MANDATORY*/
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t	ft_strlen(const char *s);
void *ft_memset(void *b, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void * src, size_t n);
void *ft_memmove(void *dest, const void * src, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t dstsize);
void		*ft_memchr(const void *s, int c, size_t n);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_toupper(int c);
int ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char        *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_atoi(const char *str);
void *ft_calloc(size_t count, size_t size);
char *ft_strdup(const char *s1);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strrchr(const char * s, int c);
/*BONUS*/
typedef struct s_list {
	void *content;/* allows to store any kind of data*/
	struct s_list *next; /* the next element if nothing it should point to NULL*/
}				t_list;
/*
 * Allocates (with malloc(3)) and returns a new element. The variable ’content’ 
 * is initialized with the value of the parameter ’content’. The variable ’next’
 * is initialized to NULL.
 */
t_list *ft_lstnew(void *content);
/*
 * Adds the element ’new’ at the beginning of the list.
 */
//void ft_lstadd_front(t_list **lst, t_list *new);
/*
 * return the number of elements in the list
 */
int ft_lstsize(t_list *lst);
/*
 * returns last element in the list
 */ 
t_list *ft_lstlast(t_list *lst);


#endif
