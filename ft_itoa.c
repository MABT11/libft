/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 19:19:56 by mbin              #+#    #+#             */
/*   Updated: 2021/12/26 18:59:48 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	i = ft_count_digit(n) + (n < 0);
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (n < 0)
	{
		n = -n;
		p[0] = '-';
	}
	p[i] = '\0';
	while (n > 0)
	{
		i--;
		p[i] = (n % 10) + '0';
		n /= 10;
	}
	return (p);
}
