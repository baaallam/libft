/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:01:26 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/11/02 01:35:26 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		if (node == NULL)
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

// void *f(void *content)
// {
//     char *s = strdup((char *)content);
//     size_t i = 0;
//     while (s[i])
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//             s[i] -= 'a' - 'A';
//         i++;
//     }
//     return (s);
// }
// int main(void)
// {
//     t_list *lst = ft_lstnew(ft_strdup("hello"));
//     ft_lstadd_back(&lst, ft_lstnew(strdup("world")));
//     t_list *m = ft_lstmap(lst, f, free);
//     while (m)
//     {
//         printf("%s\n", (char *)m->content);
//         m = m->next;
//     }
//     ft_lstclear(&lst, free);
// }
