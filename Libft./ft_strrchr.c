/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <rbertoui@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 18:09:38 by rbertoui          #+#    #+#             */
/*   Updated: 2020/11/19 18:13:47 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char    *ft_strrchr(const char *s, int c)
{
    int count;

    count = 0;
    while (s[count])
        count++;
    while (count >= 0)
    {
        if (s[count] == c)
            return ((char *)&s[count]);
        count--;
    }
    return (NULL);
}