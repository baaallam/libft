/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 22:04:02 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/26 13:08:24 by kbaaalla         ###   ########.fr       */
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

/* -------------------------------------------------------------------------- */
/*                                  TESTS                                     */
/* -------------------------------------------------------------------------- */

// char	to_upper(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// int	main(void)
// {
// 	char	*s1;
// 	char	*result;

// 	s1 = "hello world";
// 	printf("input: \"%s\"\n\n", s1);

// 	/* Test 1: uppercase every char */
// 	result = ft_strmapi(s1, to_upper);
// 	if (result)
// 	{
// 		printf("test 1 - to_upper: \"%s\"\n", result);
// 		free(result);
// 	}

// 	/* Test 3: NULL input */
// 	result = ft_strmapi(NULL, to_upper);
// 	printf("test 3 - NULL s:  %s\n", result ? result : "(null)");
// 	return (0);
// }
