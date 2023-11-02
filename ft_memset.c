/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:48:19 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/01 18:35:16 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
    unsigned int i;
    unsigned char *d;

    d = (unsigned char *)s;
    i = 0;

    while (i < len)
    {
        d[i++] = (unsigned char)c;
    }
    return (d);
}