#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		size;
	int		index;

	size = ft_strlen(s);
	index = 0;
	res = (char *)malloc((size) * sizeof(char));
	if (!res)
		return (0);
	while (s[index])
	{
		res[index] = s[index];
		index++;
	}
	return (res);
}
