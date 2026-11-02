/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:52:50 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/11/02 00:35:54 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = (*lst);
	(*lst) = new;
}
// int main(void)
// {
//     t_list *lst = NULL;
//     ft_lstadd_front(&lst, ft_lstnew("First"));
//     ft_lstadd_front(&lst, ft_lstnew("Second"));
//     ft_lstadd_front(&lst, ft_lstnew("Third"));
//     while (lst)
//     {
//         printf("%s\n", (char *)lst->content);
//         lst = lst->next;
//     }
//     return (0);
// }
