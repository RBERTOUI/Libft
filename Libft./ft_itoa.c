/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <rbertoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 17:39:49 by rbertoui          #+#    #+#             */
/*   Updated: 2020/11/20 19:40:54 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_len(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char			*ft_putnchar(long int nb, char *tab, int len)
{
	char	*base;

	base = "0123456789";
	if (nb > 9)
		ft_putnchar(nb / 10, tab, len - 1);
	tab[len] = base[nb % 10];
	return (tab);
}

char			*ft_itoa(int n)
{
	unsigned int 	nb;
	int 			len;
	char			*tab;

	len = 0;
	nb = n;
	if (n < 0)
	{
		nb = n * -1;
		len += 1;
	}
	len += ft_len(nb);
	if (!(tab = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (n == 0)
		tab[0] = '0';
	else
	{
		if (n < 0)
			tab[0] = '-';
		tab = ft_putnchar(nb, tab, len - 1);
	}
	tab[len] = '\0';
	return (tab);
}
