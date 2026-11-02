/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 23:34:29 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/11/02 00:11:50 by kbaaalla         ###   ########.fr       */
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

// int main(void)
// {
// 	t_list *node = ft_lstnew("Hello World");
//     if (!node)
//         return (1);
//     printf("Content: %s\n", (char *)node->content);
//     free(node);
//     return (0);
// }
