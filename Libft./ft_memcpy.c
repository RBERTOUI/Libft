/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <rbertoui@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 21:33:00 by rbertoui          #+#    #+#             */
/*   Updated: 2020/11/18 21:33:00 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d;
	char *s;
	
	d = (char*)dest;
	s = (char*)src;
	if (dest == src)
		return (NULL);
	if (src == NULL && dest == NULL)
		return (NULL);
	while(n--)
		*d++ = *s++;
		d++;
		s++;
	return (dest);
}