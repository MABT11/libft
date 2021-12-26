/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 23:02:33 by mbin              #+#    #+#             */
/*   Updated: 2021/12/23 20:08:48 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char * s, int c)
{
	long long	i;

	i = ft_strlen(s);
	while(i > 0)
	{
		if(s[i] == (char)c)
			return ((char*)&s[i]);
		else
			i--;
	}
	if(s[i] == (char)c)
		return ((char*)&s[i]);
	else
		return (NULL);
}
