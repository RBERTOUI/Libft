/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <rbertoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 17:37:55 by rbertoui          #+#    #+#             */
/*   Updated: 2020/11/20 17:38:03 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t count)
{
	void	*memptr;

	if (!(memptr = (void*)malloc(count * nmemb)))
		return (NULL);
	ft_bzero(memptr, count * nmemb);
	return (memptr);
}
