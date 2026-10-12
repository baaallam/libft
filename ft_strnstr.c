/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:37:44 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/12 11:37:45 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *s1 , const char *s2 , size_t n)
{
    size_t i = 0;
    size_t j = 0;

    if (s2[j] == 0)
        return ((char *)s1);
    while (s1[i] && i  < n)
    {
        j = 0;
        while (s2[j] && i + j < n  && s1[i+j] == s2[j])
            j++;
        if (s2[j] == 0)
            return ((char *) s1 + i);
        i++;
    }
    return (NULL);
}