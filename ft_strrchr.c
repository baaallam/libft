/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:37:46 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/30 18:21:11 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		n;

	n = ft_strlen(s);
	ptr = (char *)s;
	while (n >= 0)
	{
		if (ptr[n] == (unsigned char)c)
			return (&ptr[n]);
		n--;
	}
	return (NULL);
}
