/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 12:44:42 by mbin              #+#    #+#             */
/*   Updated: 2021/12/23 12:54:20 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char **p;
	size_t i;
	size_t j;
	size_t k;

	p = (char **)malloc(sizeof(s)*ft_strlen(s)+1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while(s[i])
	{
		j = 0;
	}
}

