/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 18:01:55 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/11/02 00:56:58 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if ((*lst) == NULL)
	{
		(*lst) = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int main(void)
// {
//     t_list *lst = NULL;
//     int *n = malloc(sizeof(int));
//     *n = 42;
//     ft_lstadd_back(&lst, ft_lstnew(n));
//     printf("%d\n", *(int *)lst->content);
//     free(n);
//     free(lst);
//     return (0);
// }
