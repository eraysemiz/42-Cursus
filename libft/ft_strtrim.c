/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esemiz <esemiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:38:31 by esemiz            #+#    #+#             */
/*   Updated: 2024/10/26 13:38:31 by esemiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(const char *s1, char c)
{
	while (*s1)
	{
		if (*s1 == c)
			return (1);
		s1++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		start;
	char	*res;

	if (ft_strlen(s1) == 0)
		end = ft_strlen(s1);
	else
		end = ft_strlen(s1) - 1;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (check_set(set, s1[start]))
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (check_set(set, s1[end]))
		end--;
	res = ft_substr(s1, start, end - start + 1);
	if (!res)
		return (NULL);
	return (res);
}
