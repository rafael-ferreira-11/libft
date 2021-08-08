#include "libft.h"

static	int	ft_count(const char *str, char c)
{
	int i;
	int trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
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
	index = 0;
	items = 0;
	start = -1;
	while (index <= ft_strlen(s))
	{
		if (s[index] != c && start < 0)
			start = index;
		else if ((s[index] == c || index == ft_strlen(s)) && start >= 0)
		{
			ret[items++] = ft_copy(s, start, index);
			start = -1;
		}
		index++;
	}
	ret[items] = (void *)0;
	return (ret);
}
