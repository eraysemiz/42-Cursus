/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esemiz <esemiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:46:13 by esemiz            #+#    #+#             */
/*   Updated: 2024/10/19 11:46:13 by esemiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	destsize;
	size_t	index;

	destsize = ft_strlen(dst);
	count = destsize;
	index = 0;
	if (size != 0)
	{
		while (count < size - 1 && index < ft_strlen(src))
		{
			dst[count] = src[index];
			count++;
			index++;
		}
		if (destsize < size)
			dst[count] = '\0';
	}
	if (size > destsize)
		return (destsize + ft_strlen(src));
	return (size + ft_strlen(src));
}
