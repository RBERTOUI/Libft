/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <rbertoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 17:49:10 by rbertoui          #+#    #+#             */
/*   Updated: 2020/11/20 19:19:48 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isincharset(const char *set, const char c)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int		ft_start(const char *set, const char *s1)
{
	int i;

	i = 0;
	while (s1[i] && ft_isincharset(set, s1[i]))
		i++;
	return (i);
}

static int		ft_end(const char *set, const char *s1)
{
	int i;

	i = ft_strlen(s1) - 1;
	while (i >= 0 && ft_isincharset(set, s1[i]))
		i--;
	i++;
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*s2;
	int		end;

	j = 0;
	if (!s1 || !set)
		return (NULL);
	i = ft_start(set, s1);
	end = ft_end(set, s1);
	if (end == 0)
		end = ft_start(set, s1);
	if (!(s2 = (char*)malloc(sizeof(char) * (end - ft_start(set, s1)) + 1)))
		return (NULL);
	while (i < end)
	{
		s2[j] = s1[i];
		i++;
		j++;
	}
	s2[j] = '\0';
	return (s2);
}
