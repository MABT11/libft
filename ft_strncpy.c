/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:38:46 by mbin              #+#    #+#             */
/*   Updated: 2021/07/04 11:56:10 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != 0)
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int size;

	size = ft_strlen(src);
	i = 0;
	while (i < size && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = 0;
	return (dest);
}
