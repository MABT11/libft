/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:11:43 by mbin              #+#    #+#             */
/*   Updated: 2021/12/22 18:20:11 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
	char *s3;
	size_t i;

	
	s3 = (char*)malloc((sizeof(s1)*ft_strlen(s1))+(ft_strlen(s2)*sizeof(s2)+2));
	if (s3==NULL)
		return NULL;
	i=-1;
	while(s1[++i])
		s3[i]=s1[i];
	while(s2[i-ft_strlen(s1)])
	{
		s3[i]=s2[i-ft_strlen(s1)];
		i++;
	}
	s3[i]='\0';
	return (s3);
}
int main()
{
	printf("%s", ft_strjoin("fegjreiogjioer",";kdgjvioehgiore"));
}
