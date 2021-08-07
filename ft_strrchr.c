#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*end;

	end = s;
	while (*end)
		end++;
	while (*end != *s && *end != c)
		end--;
	if (*end == c)
		return ((char *)(end));
	return (0);
}
