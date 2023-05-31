/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:49:01 by vgribkov          #+#    #+#             */
/*   Updated: 2023/01/25 10:21:43 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(char const *str, const char *to_find, size_t c)
{
	size_t	i;
	size_t	j;

	if ((!str && c == 0) || (!to_find && c == 0))
		return (NULL);
	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < c)
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j] && i + j < c)
			j++;
		if (to_find[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (0);
}

// int	main()
// {
//     size_t  c = 40;
// 	char str[] = "12345toy67890";
// 	char to_find[] = "0";
// 	printf("%s\n", ft_strnstr(str, to_find, c));

// }
