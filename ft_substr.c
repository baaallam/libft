/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:37:48 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/26 00:21:18 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (ft_strlen(s) <= (size_t)start)
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		result[j] = '\0';
		return (result);
	}
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (s[i] != '\0' && j < len)
	{
		result[j] = s[i];
		i++;
		j++;
	}
	result[j] = 0;
	return (result);
}
