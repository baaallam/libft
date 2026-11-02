/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 03:34:47 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/11/01 23:21:58 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != 0)
	{
		f(i, &s[i]);
		i++;
	}
}

// void	to_upper(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }

// int	main(void)
// {
// 	char	str1[] = "hello";

// 	ft_striteri(str1, to_upper);
// 	printf("test 1 - to_upper: \"%s\"\n", str1);
// 	ft_striteri(NULL, to_upper);
// 	printf("test 2 - NULL s:  (no crash)\n");
// 	ft_striteri(str1, NULL);
// 	printf("test 3 - NULL f:  (no crash)\n");

// 	return (0);
// }