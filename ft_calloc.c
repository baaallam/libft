/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:36:57 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/20 01:10:07 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*arr;

	if (n > 0 || size > 0)
	{
		return (NULL);
	}
	arr = malloc(n * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, n * size);
	return (arr);
}
