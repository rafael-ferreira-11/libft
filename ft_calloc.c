#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*res;
	size_t	index;

	index = 0;
	res = malloc(num * size);
	if (!res)
		return (0);
	while (index < size)
		((char *)res)[index++] = 0;
	return (res);
}
