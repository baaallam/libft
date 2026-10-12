/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:37:31 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/12 11:37:32 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s , int c)
{
    char *ptr;
    ptr = (char *) s;
    while (*ptr)
    {
        if (*ptr == (unsigned char)c)
        return (ptr);
        ptr++;
    }
    if (*ptr == (unsigned char)c)
        return (ptr);
    return (NULL);
}