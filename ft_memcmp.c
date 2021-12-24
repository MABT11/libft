/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 23:55:23 by mbin              #+#    #+#             */
/*   Updated: 2021/12/24 17:43:31 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && n - 1 > i)
	{
		i++;
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			break ;
	}
	if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	return (0);
}
