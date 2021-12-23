/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:55:21 by mbin              #+#    #+#             */
/*   Updated: 2021/12/23 18:08:41 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	size_t i;
	char *s2;

	s2 = (char*)malloc(sizeof(s1)*ft_strlen(s1)+1);
	if(s2 == NULL)
		return (NULL);
	i = -1;
	while(s1[++i])
		s2[i] = s1[i];
	s2[i]='\0';
	return (s2);
}/*
int main()
{
	printf("%s\n",ft_strdup("fgjewbgulewbufeiwbg"));
	printf("%s\n",strdup("fgjewbgulewbufeiwbg"));
}*/
