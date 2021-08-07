#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	index;

	res = (char *)malloc(len + 1);
	if (!res)
		return (0);
	index = 0;
	while (index < (len))
	{
		if (!s[start + index])
			break ;
		res[index] = s[start + index];
		index++;
	}
	return (res);
}
