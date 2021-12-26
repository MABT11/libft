/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 23:24:06 by mbin              #+#    #+#             */
/*   Updated: 2021/12/24 19:28:09 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void *p;

	p = malloc(size*count);
	if (p == NULL)
		return NULL;
	ft_bzero(p, size * count);
	return (p);
}
/*
int main()
{
	int *s = ft_calloc(3, sizeof(s));
	for(unsigned int i =0;i<sizeof(s);i++)
	{
		printf("%c |",s[i]);
		printf("%d\n",i+1);
	}
}*/
