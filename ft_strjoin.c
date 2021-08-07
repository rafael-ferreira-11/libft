#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		index;
	int		index_s2;

	if (!s1 || !s2)
		return (0);
	res = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (0);
	index = 0;
	while (s1[index])
	{
		res[index] = s1[index];
		index++;
	}
	index_s2 = 0;
	while (s2[index_s2])
	{
		res[index] = s2[index_s2];
		index++;
		index_s2++;
	}
	res[index] = '\0';
	return (res);
}
