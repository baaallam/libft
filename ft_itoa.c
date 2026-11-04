/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:37:09 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/11/04 00:58:28 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	counter;

	counter = 0;
	if (n == 0 || n < 0)
		counter++;
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

static void	fill_fct(char *result, long n, int i)
{
	while (n != 0)
	{
		result[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
}

char	*ft_itoa(int nb)
{
	long	number;
	char	*result;
	int		len;
	int		i;

	number = nb;
	len = num_len(number);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = len;
	result[i] = 0;
	i--;
	if (number < 0)
	{
		result[0] = '-';
		number = -number;
	}
	if (number == 0)
		result[0] = '0';
	fill_fct(result, number, i);
	return (result);
}
