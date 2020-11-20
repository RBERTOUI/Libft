/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <rbertoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 17:46:09 by rbertoui          #+#    #+#             */
/*   Updated: 2020/11/20 17:47:08 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t total;
	size_t i;

	i = 0;
	while (dst[i] && (i < size))
		i++;
	total = i + ft_strlen(src);
	if (i == size)
		return (total);
	while (*src && i < size - 1)
	{
		dst[i] = *src++;
		i++;
	}
	dst[i] = '\0';
	return (total);
}
