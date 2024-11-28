/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:13:25 by esemiz            #+#    #+#             */
/*   Updated: 2024/11/06 22:31:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_words(char **words, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (words[i])
			free(words[i]);
		i++;
	}
	free(words);
}

static int	word_counter(char *str, char sep)
{
	int		count;

	count = 0;
	while (*str)
	{
		while (*str && *str == sep)
			str++;
		if (*str)
			count++;
		while (*str && *str != sep)
			str++;
	}
	return (count);
}

static char	*get_word(char **words, char sep)
{
	size_t	len;
	char	*str;

	str = *words;
	while (*str && *str == sep)
		str++;
	len = 0;
	while (str[len] && str[len] != sep)
		len++;
	if (len == 0)
		return (0);
	*words = str + len;
	return (ft_substr(str, 0, len));
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	char	*str;
	int		word_count;
	int		i;

	str = (char *) s;
	word_count = word_counter((char *) s, c) + 1;
	words = (char **) malloc(sizeof(char *) * word_count);
	if (!words)
		return (0);
	i = 0;
	while (i < word_count)
	{
		words[i] = get_word(&str, c);
		if (!words[i] && i != word_count - 1)
		{
			free_words(words, i);
			return (0);
		}
		i++;
	}
	return (words);
}
