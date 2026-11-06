/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:36:57 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/11/05 23:39:12 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (nmemb != 0 && size > (size_t) - 1 / nmemb)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		arr = malloc(1);
		if (!arr)
			return (NULL);
		ft_bzero(arr, 1);
		return (arr);
	}
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, nmemb * size);
	return (arr);
}
