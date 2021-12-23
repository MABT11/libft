/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:09:27 by mbin              #+#    #+#             */
/*   Updated: 2021/12/23 18:10:16 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *p;
	size_t i;

	p = (char*)malloc(sizeof(s)*ft_strlen(s) + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	   p[i++] = s[start++];	
	return (p);
}/*
int main()
{
	printf("%s\n",ft_substr("kjbgrfeughiuerwhgfiouewrhfuiewbhgiu",0,95));
}*/
