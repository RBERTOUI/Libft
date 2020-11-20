/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <rbertoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 17:49:48 by rbertoui          #+#    #+#             */
/*   Updated: 2020/11/20 17:49:53 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *s1;
	size_t i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(s1 = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if(ft_strlen(s) > start)
	{
		while (i < len && s[start] != '\0')
		{
			s1[i] = s[start];
			start++;
			i++;
		}
	}
	s1[i] = '\0';
	return (s1);
}
