/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esemiz <esemiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:35:21 by esemiz            #+#    #+#             */
/*   Updated: 2024/10/26 13:35:21 by esemiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*tmp_src;
	size_t	i;

	tmp_src = (char *)src;
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (tmp_src[i] && i < (size - 1))
	{
		dst[i] = tmp_src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
