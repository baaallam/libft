/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 03:34:19 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/31 19:48:58 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	size_set;

	if (s1 == NULL || set == NULL)
		return (NULL);
	size_set = ft_strlen(set);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] != 0 && ft_memchr(set, s1[i], size_set) != NULL)
		i++;
	while (i < j && ft_memchr(set, s1[j - 1], size_set))
		j--;
	return (ft_substr(s1, i, j - i));
}

// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("**hey its me**", "*"));

// 	return (0);
// }