/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:01:26 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/26 21:13:40 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ftoup(void *str)
{
    char *c;
    int i;

    c = ft_strdup((char *)str);
    i = 0;
    while (c[i])
    {
        if (c[i] >= 'a' && c[i] <= 'z')
            c[i] -= 32;
        else if(c[i] >= 'A' && c[i] <= 'Z')
            c[i] += 32;
        i++;
    }
    return (c);
}

void del(void *content)
{
    free(content);   
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    (void) del;
    t_list *head;
    t_list *n;
    
    head = ft_lstnew(f(lst->content));
    
    lst = lst -> next;
    while (!lst)
    {
        n = ft_lstnew(f(lst->content));
        if (!n)
            return (0);
        ft_lstadd_back(&head,n);
        lst = lst->next;
    }
    return (head);
}

int main  (void)
{
    char s1[] = "oussama";
    char s2[] = "mouad";
    char s3[] = "ayman";

    
    t_list *head;
    t_list *pt1;
    t_list *pt2;
    t_list *pra;
    
   head = ft_lstnew(s1);
   pt1 = ft_lstnew(s2);
   pt2 = ft_lstnew(s3);

   head->next = pt1;
   pt1->next = pt2;
    

    // char str[] = "oussama";
    // char *res = ftoup(str);

    // printf("%s\n",res);
    

   pra = ft_lstmap(head,ftoup,del);
   
   while (pra != NULL)
   {
        printf("%s\n" ,(char *) pra->content);
        pra = pra->next;
   }

    return (0);
}