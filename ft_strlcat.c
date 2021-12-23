/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:10:47 by mbin              #+#    #+#             */
/*   Updated: 2021/12/23 12:09:37 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(dest);
	if (!dstsize || dstsize <= len)
		return (dstsize + ft_strlen(src));
	i = len;
	while (src[j] && i < dstsize - 1)
		dest[i++] = src[j++];
	dest[i] = 0;
	return (len + ft_strlen(src));
}
