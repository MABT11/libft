/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:09:27 by mbin              #+#    #+#             */
/*   Updated: 2021/12/26 15:23:39 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*case1(void)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)malloc(sizeof(char));
	if (p == NULL)
		return (NULL);
	p[0] = 0;
	return (p);
}

static char	*case2(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	eff;

	i = 0;
	eff = ft_strlen(s) - start;
	p = (char *) malloc(eff + 1);
	if (p == NULL)
		return (NULL);
	while (i < len && s[start + i])
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = 0;
	return (p);
}

static char	*case3(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)malloc(sizeof(char) * ft_strlen(s + start) + 1);
	if (p == NULL)
		return (NULL);
	while (i < len && s[start + i])
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = 0;
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	if(!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		return (case1 ());
	}
	else if (start + len > ft_strlen(s))
	{
		return (case2 (s, start, len));
	}
	else if (start + len <= ft_strlen(s))
	{
		return (case3 (s, start, len));
	}
	else
		return (NULL);
}
