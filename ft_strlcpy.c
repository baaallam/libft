/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:37:38 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/12 11:37:39 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst , const char *src , size_t size)
{
    size_t i;
    size_t len;

    len = 0;
    i = 0;

    while (src[len])
        len++;
    
    if (size == 0)
        return (len);
    if (size > 0)
    {
        while (i < size - 1 && src[i] != 0)
        {
            dst[i] = src[i];
            i++;
        }  
        dst[i] = 0;
    }
    return (len);
}
