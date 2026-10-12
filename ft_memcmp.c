/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:37:14 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/12 11:45:57 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*sa;
	const unsigned char	*se;

	sa = (const unsigned char *)s1;
	se = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*sa != *se)
			return (*sa - *se);
		se++;
		sa++;
		n--;
	}
	return (0);
}
