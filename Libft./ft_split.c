/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <rbertoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 17:45:04 by rbertoui          #+#    #+#             */
/*   Updated: 2020/11/20 17:45:17 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbmots(const char *s1, char c)
{
	int i;
	int cnt;

	i = 0;
	cnt = 0;
	while(s1[i])
	{
		while (s1[i] && s1[i] == c)
			i++;
		if (s1[i])
			cnt++;
		while (s1[i] && s1[i] != c)
			i++;
	}
	return (cnt);
}

static int		ft_nblettres(const char *s1, char c, unsigned int i)
{
	int lettres;

	lettres = 0;
	while (s1[i] && s1[i] != c)
	{
		i++;
		lettres++;
	}
	return (lettres);
}

static char	*ft_copymots(const char *s1, char *mots, char c, unsigned int *i)
{
	unsigned int j;

	j = 0;
	while (s1[*i] && s1[*i] != c)
	{
		mots[j] = s1[*i];
		(*i)++;
		j++;
	}
	mots[j] = '\0';
	return (mots);
}

static char	**ft_freemots(char **s1, int j)
{
	while (j >= 0)
	{
		free(s1[j]);
		j--;
	}
	free(s1);
	return (NULL);
}

char	**ft_split(const char *s1, const char c)
{
	unsigned int	i;
	unsigned int	j;
	char 			**s2;
	unsigned int	nbmots;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	nbmots = ft_nbmots(s1, c);
	if (!(s2 = (char**)malloc(sizeof(char*) * (nbmots + 1))))
		return (NULL);
	while (j < nbmots)
	{
		while (s1[i] && s1[i] == c)
			i++;
		if (!(s2[j] = (char*)malloc(sizeof(char) * (ft_nblettres(s1, c, i) + 1))))
			return(ft_freemots(s2, j));
		ft_copymots(s1, s2[j], c, &i);
		j++;
	}
	s2[j] = NULL;
	return (s2);
}
