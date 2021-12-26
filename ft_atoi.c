/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:27:44 by mbin              #+#    #+#             */
/*   Updated: 2021/12/26 19:49:24 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	long		num;
	int		sign;

	num = 0;
	sign = 1;
	i = 0;
	while (str[i] < 33 && str[i] >= 0)
		i++;
	if (str[i] == '+' || str[i]=='-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
		num = (num * 10) + (str[i++] - '0');
	if (num>2147483647&&sign==1)
		return (-1);
	else if (num>2147483648&&sign==-1)
		return(0);
	return ((int)num*sign);
}
