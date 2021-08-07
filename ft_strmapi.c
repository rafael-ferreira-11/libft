#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		index;

	ret = (char *)malloc(ft_strlen(s) + 1);
	if (!ret)
		return (0);
	index = 0;
	while (s[index])
	{
		ret[index] = f(index, s[index]);
		index++;
	}
	ret[index] = '\0';
	return (ret);
}
