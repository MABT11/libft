/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:55:44 by mbin              #+#    #+#             */
/*   Updated: 2021/12/23 13:11:02 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (0 < n)
		{
			n--;
			((char *)dest)[n] = ((char *)src)[n];
		}
		return (dest);
	}
	else
		return (ft_memcpy(dest, src, n));
}
