/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 18:01:55 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/25 18:50:30 by kbaaalla         ###   ########.fr       */
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

// int	main(void)
// {
// 	t_list	*head;

// 	head = NULL;

// 	// Add two elements to the back
// 	ft_lstadd_back(&head, ft_lstnew("First"));
// 	ft_lstadd_back(&head, ft_lstnew("Last"));

// 	// Print both to verify the order
// 	printf("1: %s\n", (char *)head->content);
// 	printf("2: %s\n", (char *)head->next->content);

// 	// Clean up
// 	free(head->next);
// 	free(head);
// 	return (0);
// }
