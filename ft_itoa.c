#include "libft.h"

static int	ft_sizenumber(int n)
{
	int	ret;

	if (n > 0)
		ret = 0;
	else
		ret = 1;
	while (n)
	{
		n = n / 10;
		ret++;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		num_chars;
	long	number;

	number = n;
	if (n < 0)
		number = number * -1;
	num_chars = ft_sizenumber(n);
	ret = (char *)malloc(num_chars + 1);
	if (!ret)
		return (0);
	*(ret + num_chars--) = '\0';
	while (number > 0)
	{
		*(ret + num_chars--) = number % 10 + '0';
		number = number / 10;
	}
	if (num_chars == 0 && *(ret + 1) == '\0')
		*ret = '0';
	else if (num_chars == 0 && *(ret + 1) != '\0')
		*ret = '-';
	return (ret);
}
