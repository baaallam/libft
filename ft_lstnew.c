/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 23:34:29 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/25 15:44:42 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main (void)
// {
//     char	*test_str = "Hello, world!";
// 	t_list	*node;
//     node = ft_lstnew(test_str);
//     if (node == NULL)
//     {
//         printf("Test Failed: ft_lstnew returned NULL.\n");
// 		return (1);
//     }
//     printf("--- Testing ft_lstnew ---\n");
// 	printf("Expected content: %s\n", test_str);
// 	printf("Actual content:   %s\n", (char *)node->content);
//     if (node->next == NULL)
// 		printf("Success: next pointer is correctly initialized to NULL.\n");
// 	else
// 		printf("Error: next pointer is NOT NULL.\n");

// 	// 4. Clean up allocated memory
// 	free(node);
// 	return (0);
// }