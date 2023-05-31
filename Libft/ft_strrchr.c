/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:49:38 by vgribkov          #+#    #+#             */
/*   Updated: 2023/01/30 09:25:33 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*begin;
	char	cc;

	cc = (char)c;
	str = (char *)s;
	begin = str;
	while (*str)
		str++;
	if (cc == '\0')
		return (str);
	str--;
	while (str >= begin)
	{
		if (*str == cc)
			return (str);
		str--;
	}	
	return (NULL);
}
