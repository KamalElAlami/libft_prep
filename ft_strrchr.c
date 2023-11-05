/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:40:26 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/05 17:36:35 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		sl;

	i = 0;
	sl = ft_strlen((char *)s);
	while (i <= sl)
	{
		if (*(s + sl) == (char)c)
			return ((char *)(s + sl));
		sl--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s", ft_strrchr("hello world", 0) - 1);
// 	// printf("%s", strrchr(, 0));
// }
