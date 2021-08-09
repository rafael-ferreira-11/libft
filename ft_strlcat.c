/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <ferreira@asia.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 13:42:04 by user42            #+#    #+#             */
/*   Updated: 2021/08/08 13:42:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_sizeof(const char *str)
{
	size_t	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_index;
	size_t	d_index;

	if (size <= ft_sizeof(dst))
		return (ft_sizeof(src) + size);
	d_index = ft_sizeof(dst);
	s_index = 0;
	while (src[s_index] && d_index < (size - 1))
	{
		dst[d_index] = src[s_index];
		d_index++;
		s_index++;
	}
	dst[d_index] = '\0';
	return (ft_sizeof(dst) + ft_sizeof(&src[s_index]));
}
