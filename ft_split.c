/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 12:44:42 by mbin              #+#    #+#             */
/*   Updated: 2021/12/26 16:48:42 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ftwc(const char *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	**helper(const char *s, char c, char **p, size_t start)
{
	size_t	j;
	size_t	k;
	size_t	o;

	j = 0;
	while (s[start] && j < ftwc(s, c))
	{
		k = start;
		while (s[k] && s[k] != c)
			k++;
		p[j] = (char *)malloc(sizeof(char) * (k - start + 1));
		if (p[j] == NULL)
			return (NULL);
		o = 0;
		while (o < k && s[start] && s[start] != c)
			p[j][o++] = s[start++];
		p[j++][o] = 0;
		while (s[k] == c)
			k++;
		start = k;
	}
	p[j] = 0;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	i;

	if (!s)
		return (NULL);
	p = (char **)malloc(sizeof(s) * (ftwc(s, c) + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s[i] == c && s[i])
		i++;
	return (helper(s, c, p, i));
}
