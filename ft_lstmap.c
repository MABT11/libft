/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin <mbin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 18:12:28 by mbin              #+#    #+#             */
/*   Updated: 2021/12/27 18:12:28 by mbin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *temp;
    t_list  *new;

    if (temp == NULL)
        return (NULL);
    new = NULL;
    while(lst)
    {
        temp = ft_lstnew(f(lst->content));
        if(temp == NULL)
        {
            ft_lstclear(&new, del);
			return (NULL);
        }
        ft_lstadd_back(&new, temp);
        lst = lst->next;
    }
    return (new);
}
