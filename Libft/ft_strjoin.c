/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:48:35 by vgribkov          #+#    #+#             */
/*   Updated: 2023/04/26 13:34:51 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	int		i;
	int		j;
	int		step;

	if (!s1 || !s2)
		return (NULL);
	step = 0;
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	arr = (char *)malloc(i + j + 1);
	i = 0;
	if (!arr)
		return (NULL);
	while (s1[i])
		arr[step++] = s1[i++];
	while (*s2)
		arr[step++] = *s2++;
	arr[step] = '\0';
	free((char *)s1);
	return (arr);
}
