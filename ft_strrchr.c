/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:37:46 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/18 22:11:48 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *ptr;
	char *save;

	ptr = (char *)s;
	save = NULL;
	while (*ptr)
	{
		if (*ptr == (unsigned char)c)
			save = ptr;
		ptr++;
	}
	if (*ptr == (unsigned char)c)
		return (ptr);
	return (save);
}   