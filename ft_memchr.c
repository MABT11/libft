/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 23:08:50 by mbin              #+#    #+#             */
/*   Updated: 2021/12/23 13:13:09 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	if(c==0 && n ==0)
		return (NULL);
	i = 0;
	while(i < n)
		if(((char*)s)[i] == (unsigned char)c)
			return ((void*)&s[i]);
		else
			i++;
	if(((char*)s)[i] ==(unsigned char) c)
		return ((void*)&s[i]);
	else
		return (NULL);
}
/*
int main()
{
	char	*str;

	str = "jrehdf\0iodhfcioc";
	printf("%s\n",ft_memchr(str, 'z', 999999));
	printf("%s\n",memchr(str, 'z',  999999));
}*/
