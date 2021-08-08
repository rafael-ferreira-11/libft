#include "libft.h"

static	int	ft_count(const char *str, char c)
{
	int	index;
	int	count;
	int	sep;

	count = 0;
	sep = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] != c && sep == 0)
		{
			sep = 1;
			count++;
			index++;
		} else if (str[index] == c)
			sep = 0;
		index++;
	}
	return (count);
}

static char	*ft_copy(const char *str, int start, int finish)
{
	char	*ret;
	int		index;

	index = 0;
	ret = malloc((finish - start + 1));
	while (start < finish)
	{
		ret[index] = str[start];
		index++;
		start++;
	}
	ret[index] = '\0';
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	int		start;
	size_t	index;
	size_t	items;
	char	**ret;

	if (!s)
		return (0);
	ret = malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!ret)
		return (0);
	index = -1;
	items = 0;
	start = -1;
	while (++index <= ft_strlen(s))
	{
		if (s[index] != c && start < 0)
			start = index;
		else if ((s[index] == c || index == ft_strlen(s)) && start >= 0)
		{
			ret[items++] = ft_copy(s, start, index);
			start = -1;
		}
	}
	ret[items] = (void *)0;
	return (ret);
}
