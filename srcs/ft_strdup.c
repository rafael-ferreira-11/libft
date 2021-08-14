/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <ferreira@asia.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 13:42:14 by user42            #+#    #+#             */
/*   Updated: 2021/08/08 13:42:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		size;
	int		index;

	size = ft_strlen(s);
	index = 0;
	res = (char *)malloc((size + 1) * sizeof(char));
	if (!res)
		return (0);
	while (s[index])
	{
		res[index] = s[index];
		index++;
	}
	res[index] = 0;
	return (res);
}
