/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 12:44:42 by mbin              #+#    #+#             */
/*   Updated: 2021/12/25 00:59:15 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t *ft_wc(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	*p;

	i = 0;
	j = 0;
	p = (size_t *)malloc(sizeof(size_t) * ftwc(s,c));
	while (s[i])
	{
		if (s[i + 1] == c)
			p[j++] = (size_t)s + i;
		i++;
	}
	return (p);
}
unsigned long ftwc(const char *s, char c)
{
	size_t	i;
	size_t	count;

	count = 1;
	i = 0;
	while (s[i])
		if (s[i++ + 1] == c)
			count++;
			return (count);
}
char	**ft_split(char const *s, char c)
{
	char **p;
	size_t i;
	size_t j;
	size_t k;
	size_t *o;

	p = (char **)malloc(sizeof(s) * ftwc(s,c) + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	j = 0;
	o = ft_wc(s,c);
	while (s[i])
	{
		if (s[i + 1] == c)
		{
			//find the length of the current sttring that you are going to create
			k = 0;
			p[j] = (char *)malloc(sizeof(char) * (o[j+1]-o[j] +1));
			while (k < o[j + 1])
			{
				p[j][k] = s[k];
				k++;
			}
			p[j++][k] = 0;
		}
		i++;
	}
	p[i] = 0;
	return (p);
}
