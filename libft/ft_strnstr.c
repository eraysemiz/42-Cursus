

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		n = 0;
		while (s1[i + n] == s2[n] && (i + n) < len)
		{
			if (s1[i + n] == '\0' && s2[n] == '\0')
				return ((char *)&s1[i]);
			n++;
		}
		if (s2[n] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (0);
}
