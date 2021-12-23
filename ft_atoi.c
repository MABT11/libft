/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:27:44 by mbin              #+#    #+#             */
/*   Updated: 2021/12/23 20:19:15 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	size_t i;
	int sign;
	int num;

	sign = 0;
	num = 0;
	i = 0;
	while(str[i] < 33 && str[i] > -1)
		i++;
	if(str[i] == '-'||str[i]=='+')
	{
		if(str[i]=='-')
			sign = 1;
		i++;
	}
	while(ft_isdigit(str[i]))
		num = num*10 +(str[i++]-'0') ;
	if(sign)
		return -num;
	return num;
}/*
int main()
{
	printf("%d\n",ft_atoi("+1"));
}*/
