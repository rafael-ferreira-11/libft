/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <ferreira@asia.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 13:42:19 by user42            #+#    #+#             */
/*   Updated: 2021/08/08 13:42:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	ft_putchar_fd((char)(numero % 10 + 48), fd);
}
