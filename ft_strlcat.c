/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:37:37 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/19 02:33:24 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	dlen = 0;
	slen = 0;
	i = 0;
	j = 0;
	while (dst[dlen])
		dlen++;
	while (src[slen])
		slen++;
	if (dlen >= size)
		return (size + slen);
	j = dlen;
	while (j < size - 1 && src[i] != '\0')
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = 0;
	return (dlen + slen);
}
