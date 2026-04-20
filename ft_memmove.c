/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-f <gsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 23:39:12 by gsilva-f          #+#    #+#             */
/*   Updated: 2026/04/20 23:49:06 by gsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *d;
    unsigned char   *s;

    if(!dest && !src)
        return (NULL);
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    if (d > s)
    {
        while (n--)
            d[n] = s[n];
    }
    else
    {
        ft_memcpy(d, s, n);
    }
    return (dest);
}
