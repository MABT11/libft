/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:50:32 by mbin              #+#    #+#             */
/*   Updated: 2021/12/23 13:17:18 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while(s[i])
		if(s[i] == (char)c)
			return ((char*)&s[i]);
		else
			i++;
	if(s[i] == c)
		return ((char*)&s[i]);
	else
		return (NULL);
}
