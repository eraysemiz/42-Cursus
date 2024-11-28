/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esemiz <esemiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:16:32 by esemiz            #+#    #+#             */
/*   Updated: 2024/10/26 13:16:32 by esemiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*tmp_dest;
	char	*tmp_src;

	tmp_dest = (char *)s1;
	tmp_src = (char *)s2;
	if (!s1 && !s2)
		return (NULL);
	if (s1 <= s2)
	{
		while (n--)
		{
			*tmp_dest++ = *tmp_src++;
		}
	}
	else if (s1 > s2)
	{
		tmp_dest += n - 1;
		tmp_src += n - 1;
		while (n--)
		{
			*tmp_dest-- = *tmp_src--;
		}
	}
	return (s1);
}
