#include "libft.h"

static	int	ft_count(const char *str, char c)
{
	int	sep;
	int	count;

	count = 0;
	sep = 0;
	while (*str)
	{
		if (*str != c && sep == 0)
		{
			sep = 1;
			count++;
		}
		else if (*str == c)
			sep = 0;
		str++;
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
	int		index;
	int		items;
	char	**ret;

	if (!s)
		return (0);
	ret = malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!ret)
		return (0);
	index = -1;
	items = 0;
	start = -1;
	while (++index <= (int)ft_strlen(s))
	{
		if (s[index] != c && start < 0)
			start = index;
		else if ((s[index] == c || index == (int)ft_strlen(s)) && start >= 0)
		{
			ret[items++] = ft_copy(s, start, index);
			start = -1;
		}
	}
	ret[items] = (void *)0;
	return (ret);
}
