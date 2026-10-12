/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:37:29 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/12 12:01:21 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_counter(char const *str, char c)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (str[i] != 0)
	{
		while (str[i] == c)
			i++;
		if (str[i] == 0)
			return (counter);
		counter++;
		while (str[i] != c && str[i] != 0)
			i++;
	}
	return (counter);
}

int	word_len(char const *str, char c)
{
	int	len;

	len = 0;
	while (str[len] != 0 && str[len] != c)
		len++;
	return (len);
}

char	*make_word(char const *str, char c)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	word = malloc(sizeof(char) * (word_len(str, c) + 1));
	if (!word)
		return (NULL);
	while (str[i] != 0 && str[i] != c)
	{
		word[j] = str[i];
		i++;
		j++;
	}
	word[j] = 0;
	return (word);
}

void	ft_free(char **result, int k)
{
	int	i;

	i = 0;
	while (i < k)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static char test(char *ptr)
{
    if (!ptr)
        return (NULL);
}
char	**ft_split(char const *str, char c)
{
	char	**result;
	int		i;
	int		k;

	i = 0;
	k = 0;
	test(str);
	result = malloc(sizeof(char *) * (word_counter(str, c) + 1));
	test(result);
	while (str[i] != 0)
	{
		while (str[i] == c)
			i++;
		if (str[i] == 0)
		{
			result[k] = NULL;
			return (result);
		}
		result[k] = make_word(str + i, c);
		if (!result[k])
		{
			ft_free(result, k);
			return (NULL);
		}
		i = i + word_len(str + i, c);
		k++;
	}
	result[k] = NULL;
	return (result);
}
