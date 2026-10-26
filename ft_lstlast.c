/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:31:45 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/25 17:59:59 by kbaaalla         ###   ########.fr       */
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

// int main (void)
// {
//     t_list	*node;
// 	t_list	*last;

// 	// Create one node
// 	node = ft_lstnew("Only Element");

// 	// Get the last node
// 	last = ft_lstlast(node);
//     // Print result
// 	if (last != NULL)
// 		printf("Last node content: %s\n", (char *)last->content);
// 	else
// 		printf("Failed: Returned NULL\n");
//     free(node);
//     return (0);
// }