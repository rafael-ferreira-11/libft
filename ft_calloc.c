#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*res;
	size_t	index;

	index = 0;
	res = malloc(num * size);
	if (!res)
		return (0);
	ft_memset(res, 0, num * size);
	return (res);
}
