#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	numero;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		numero = (unsigned int)(n * -1);
	}
	else
		numero = (unsigned int)n;
	if (numero >= 10)
	{
		ft_putnbr_fd((numero / 10), fd);
	}
	ft_putchar_fd((numero % 10), fd);
}
