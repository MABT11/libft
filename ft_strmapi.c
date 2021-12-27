/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 22:36:09 by mbin              #+#    #+#             */
/*   Updated: 2021/12/26 19:59:11 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *p;

    if (!(p = ft_strdup(s)))
        return (NULL);
    i = 0;
    while (s[i])
    {
        p[i] = (*f)(i, s[i]);
        i++;
    }
    return (p);
}
