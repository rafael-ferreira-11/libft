#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	index;

	res = (char *)malloc(len + 1);
	if (!res || !s)
		return (0);
	index = 0;
	while (index < len && start < ft_strlen(s) && start + index < ft_strlen(s))
	{
		if (!s[start + index])
		{
			index++;
			break ;
		}
		res[index] = s[start + index];
		index++;
	}
	res[index] = 0;
	return (res);
}
