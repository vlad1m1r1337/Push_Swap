/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:42:05 by vgribkov          #+#    #+#             */
/*   Updated: 2023/01/25 17:57:40 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*arr;
	int		j;
	int		i;

	str = (char *)s1;
	j = ft_strlen(str);
	arr = (char *)malloc(j + 1);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < j)
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

// #include <stdio.h>
// int main()
// {
// 	char *a = NULL;
// 	a = ft_strdup(a);
// 	printf("%s\n", a);
// 	return (0);
// }
