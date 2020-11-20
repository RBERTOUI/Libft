/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <rbertoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 17:41:31 by rbertoui          #+#    #+#             */
/*   Updated: 2020/11/20 19:20:28 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d;
	char *s;

	d = (char*)dest;
	s = (char*)src;
	if (dest == src)
		return (NULL);
	if (src == NULL && dest == NULL)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dest);
}
