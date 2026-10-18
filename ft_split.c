/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:37:29 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/16 20:20:23 by kbaaalla         ###   ########.fr       */
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

//strlen call

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

void	skipper(char const *str, char c, int i)
{
	while (str[i] == c)
		i++;
}

void	checker(char const *str, int i, char **result, int k)
{
	if (str[i] == 0)
	{
		result[k] = NULL;
		return (result);
	}
}

void	checker1(char **result, int k)
{
	if (!result[k])
	{
		ft_free(result, k);
		return (NULL);
	}
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

char	**ft_split(char const *str, char c)
{
	char	**result;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!str)
		return (NULL);
	result = malloc(sizeof(char *) * (word_counter(str, c) + 1));
	if (!result)
		return (NULL);
	while (str[i] != 0)
	{
		skipper (str, c, i);
		checker (str, i, result, k);
		result[k] = make_word(str + i, c);
		checker1 (result, k);
		i = i + word_len(str + i, c);
		k++;
	}
	result[k] = NULL;
	return (result);
}

#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c);

int main(void)
{
    char **result;
    int i;

    result = ft_split("hello world 42 school", ' ');
    if (!result)
        return (1);

    i = 0;
    while (result[i])
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return (0);
}