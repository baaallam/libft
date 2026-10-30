/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:01:26 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/30 03:05:58 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ftoup(void *str)
// {
// 	char	*c;
// 	int		i;

// 	c = ft_strdup((char *)str);
// 	i = 0;
// 	while (c[i])
// 	{
// 		if (c[i] >= 'a' && c[i] <= 'z')
// 			c[i] -= 32;
// 		else if (c[i] >= 'A' && c[i] <= 'Z')
// 			c[i] += 32;
// 		i++;
// 	}
// 	return (c);
// }

// void	del(void *content)
// {
// 	free(content);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;

	if (!lst || !f || !del)
		return (0);
	new_list = NULL;
	while (lst)
	{
		node = ft_lstnew(lst->content);
		if (node == NULL )
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		node->content = f(lst->content);
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}

// int	main(void)
// {
// 	char	s1[] = "oussama";
// 	char	s2[] = "mouad";
// 	char	s3[] = "ayman";
// 	t_list	*head;
// 	t_list	*pt1;
// 	t_list	*pt2;
// 	t_list	*pra;

// 	head = ft_lstnew(s1);
// 	pt1 = ft_lstnew(s2);
// 	pt2 = ft_lstnew(s3);
// 	head->next = pt1;
// 	pt1->next = pt2;

// 	pra = ft_lstmap(head, ftoup, del);
// 	while (pra != NULL)
// 	{
// 		printf("%s\n", (char *)pra->content);
// 		pra = pra->next;
// 	}
// 	return (0);
// }
