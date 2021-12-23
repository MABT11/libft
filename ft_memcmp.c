/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 23:55:23 by mbin              #+#    #+#             */
/*   Updated: 2021/12/23 13:29:31 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	
	if(n == 0)
		return (0);
	i = 0;
	while(((unsigned char*)s1)[i] && ((unsigned char*)s2)[i] && n > 0)
	{
		if(((unsigned char*)s1)[i] != ((unsigned char*)s2)[i])
			break;
		i++;
		n--;
	}
	return ((unsigned char*)s1)[i] - ((unsigned char*)s2)[i];
}/*
int main()
{
	char *str1;
	char *str2;
	size_t n =100;

	str1 = "dkfjdifidfdiwnkfjeghioefhgioerhgioerhgoierhgoierhoighnreiog";
	str2="dkfjngdiogioerngoi;qrewngiofwefekfohgiofhgiofdhgiofdhgioehdgioerhgioheqio";
	printf("%d\n", ft_memcmp(str1,str2,n));
	printf("%d", memcmp(str1,str2,n));
}*/
