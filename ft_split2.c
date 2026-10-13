/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:00:54 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/13 17:06:32 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*skipper(char const *str, char c, int i)
{
	while (str[i] == c)
		i++;
}

void	*checker(char const *str, int i, char **result, int k)
{
	if (str[i] == 0)
	{
		result[k] = NULL;
		return (result);
	}
}

void	*checker1(char **result, int k)
{
	if (!result[k])
	{
		ft_free(result, k);
		return (NULL);
	}
}
