/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:37:31 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/18 19:44:38 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)*s != (char)c)
	{
        if (!*s)
            return (NULL);
        s++;
    }
    return ((char *)s);
}

// int	main(void)
// {
// 	const char	*s = "Hello, World!";
// 	char		*result;
// 	char		*expected;

// 	result = ft_strchr(s, 'W');
// 	expected = (char *)strchr(s, 'W');
// 	printf("found: %p, expected: %p\n", (void *)result, (void *)expected);

// 	result = ft_strchr(s, 'z');
// 	expected = (char *)strchr(s, 'z');
// 	printf("not found: %p, expected: %p\n", (void *)result, (void *)expected);

// 	result = ft_strchr(s, '\0');
// 	expected = (char *)strchr(s, '\0');
// 	printf("null: %p, expected: %p\n", (void *)result, (void *)expected);

// 	return (0);
// }   