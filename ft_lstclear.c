/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:00:51 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/27 18:45:01 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *current;
    t_list *next;
    
    if (lst == NULL)
        return;
    current = *lst;
    while (current != NULL)
    {
        next = current->next;
        ft_lstdelone(current,del);
        next = next->next;
    }
    *lst = NULL;
}