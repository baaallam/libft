/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:37:46 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/11/03 23:36:42 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	if (!s)
		return (NULL);
	index = ft_strlen(s);
	while (index > 0)
	{
		if (s[index] == (char)c)
			return ((char *)(s + index));
		index--;
	}
	if (s[index] == (char)c)
		return ((char *)(s + index));
	return (NULL);
}
