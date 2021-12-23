/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:36:33 by mbin              #+#    #+#             */
/*   Updated: 2021/12/23 13:41:22 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*done*/
#include "libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(src);
	if (dst == src || size == 0 || src == 0 || dst == 0)
		return (len);
	while (src[i] && i <( size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i]='\0';
	return (len);
}/*
int main()
{
	char src[] = "coucou";
	char dst[10]; memset(dst, 'A', 10);
	size_t n =-1;
	printf("Before calling ft_strlcat\n");
	printf("Src %s | Dest %s | count %zu\n",src,dst,n);
	size_t i = ft_strlcpy(dst,src,n);
	
	printf("After calling ft_strlcat\n");
	printf("Src %s | Dest %s | count %zu\n",src,dst,n);
	
	printf("count from the function %zu\nCount from strlen of dest %lu\n",i,strlen(src));
	return (0);
}*/
