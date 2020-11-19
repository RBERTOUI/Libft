/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <rbertoui@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 14:33:32 by rbertoui          #+#    #+#             */
/*   Updated: 2020/11/19 16:45:24 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2 , size_t len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (s2[i] == '\0' || s2 == 0)
		return ((char*)s1);
	while (s1[i] && i < len)
	{
		j = 0;
		while (s1[i + j] == s2[j] && i + j < len)
		{
			j++;
			if (s2[j] == '\0')
				return ((char*)&s1[i]);
		}
		i++;
	}
	return (NULL);
}