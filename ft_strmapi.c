/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 22:04:02 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/11/01 19:06:54 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	while (s[i] != 0)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}

// char	to_upper(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// int	main(void)
// {
// 	char	*result;

// 	result = ft_strmapi("hello world", to_upper);
// 	printf("Result: %s\n", result);
// 	free(result);
// 	return (0);
// }
