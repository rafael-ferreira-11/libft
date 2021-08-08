#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	index;

	if (!s)
		return (0);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start > len)
		res = (char *)malloc(len + 1);
	else
		res = (char *)malloc(ft_strlen(s) - start + 1);
	if (!res)
		return (0);
	index = 0;
	while (index < len)
	{
		res[index] = s[start + index];
		index++;
	}
	res[index] = 0;
	return (res);
}
