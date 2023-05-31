/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:53:51 by vgribkov          #+#    #+#             */
/*   Updated: 2023/01/30 09:14:14 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void	*s, int c, size_t	n)
{
	char	*str;
	char	l;

	str = (char *)s;
	l = (char)c;
	while (n > 0)
	{	
		if (*str == l)
			return ((void *)str);
		str++;
		n--;
	}
	return (0);
}
// int main()
// {
//     char *s = NULL;
//     printf("%s", ft_memchr(s, 'W', 10));    
// }
