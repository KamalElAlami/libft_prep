/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:30:17 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/17 04:12:39 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alptr;

	alptr = malloc(count * size);
	if (!alptr)
		return (NULL);
	else
		ft_bzero(alptr, count * size);
	return (alptr);
}

// int	main(void)
// {
// 	int	*ptr;

// 	ptr = ft_calloc(0, 0);
// 	for (int i=0; i < 5; i++)
// 	{
// 		printf("%d\n", ptr[i]);	
// 	}
// }