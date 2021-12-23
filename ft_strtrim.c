/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 12:18:15 by mbin              #+#    #+#             */
/*   Updated: 2021/12/23 12:44:30 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *p;
	size_t i;

	p = (char *)malloc(sizeof(s1)*ft_strlen(s1)+1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		if()
	}

}

