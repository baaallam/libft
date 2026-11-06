/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:37:48 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/11/05 23:43:00 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocation(const char *s, size_t len, unsigned int start)
{
	char	*result;

	if (ft_strlen(s) - start < len)
		result = malloc((ft_strlen(s) - start) + 1);
	else
		result = malloc(len + 1);
	return (result);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	j;

	j = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= (size_t)start)
		return (ft_strdup(""));
	result = allocation(s, len, start);
	if (!result)
		return (NULL);
	while (s[start] != '\0' && j < len)
	{
		result[j] = s[start];
		start++;
		j++;
	}
	result[j] = 0;
	return (result);
}
