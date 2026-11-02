/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:31:45 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/11/02 01:06:18 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*last;
// 	lst = ft_lstnew("first");
// 	ft_lstadd_back(&lst, ft_lstnew("second"));
// 	ft_lstadd_back(&lst, ft_lstnew("third"));
// 	last = ft_lstlast(lst);
// 	if (last)
// 		printf("last: %s\n", (char *)last->content);
// 	return (0);
// }