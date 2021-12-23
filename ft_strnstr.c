/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 21:30:26 by mbin              #+#    #+#             */
/*   Updated: 2021/12/23 22:30:33 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(needle);
	if (j == 0)
		return ((char*)haystack);
	i = 0;
	while(haystack[i] && i < len)
	{
		if(!ft_strncmp(haystack + i,needle,len))
			return ((char*)haystack + i);
		i++;
	}
	return (NULL);
}
