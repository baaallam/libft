/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:52:50 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/26 00:23:49 by kbaaalla         ###   ########.fr       */
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

// int main (void)
// {
//     t_list	*head;
// 	t_list	*first_node;
// 	t_list	*second_node;
// 	head = NULL;

//     // 1. Create the first node ("World")
// 	first_node = ft_lstnew("World");
// 	if (!first_node)
// 	{
// 		printf("Error: Failed to create first_node\n");
// 		return (1);
// 	}
//     // 2. Add it to our empty list (head should now point to first_node)
// 	ft_lstadd_front(&head, first_node);

// 	// 3. Create the second node ("Hello")
// 	second_node = ft_lstnew("Hello");
// 	if (!second_node)
// 	{
// 		printf("Error: Failed to create second_node\n");
// 		free(first_node);
// 		return (1);
// 	}
//     // 4. Add "Hello" to the front (head should now point to second_node,
// and its next should be first_node)
// 	ft_lstadd_front(&head, second_node);

// 	// 5. Verify the order of the list
// 	printf("--- Testing ft_lstadd_front ---\n");

// 	if (head == NULL)
// 	{
// 		printf("Fail: Head is NULL\n");
// 	}
// 	else
// 	{
// 		printf("First node content (Expected: Hello): %s\n",
//(char *)head->content);

// 		if (head->next != NULL)
// 			printf("Second node content (Expected: World): %s\n",
//(char *)head->next->content);
// 		else
// 			printf("Fail: Second node is missing from the list\n");
// 	}

// 	// 6. Clean up allocated memory
// 	free(second_node);
// 	free(first_node);
// 	return (0);
// }