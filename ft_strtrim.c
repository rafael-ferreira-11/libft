#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	index;

	if (!s1)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	index = ft_strlen(s1);
	while (index > 0 && ft_strchr(set, s1[index]))
		index--;
	return (ft_substr(s1, 0, index + 1));
}
