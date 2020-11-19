/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <rbertoui@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 15:48:07 by rbertoui          #+#    #+#             */
/*   Updated: 2020/11/12 18:13:17 by rbertoui         ###   ########.fr       */
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