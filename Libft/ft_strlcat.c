/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 10:12:02 by vgribkov          #+#    #+#             */
/*   Updated: 2023/01/24 16:57:04 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	destlen;
	size_t	srclen;

	if ((!dest && destsize == 0) || (!src && destsize == 0))
		return (0);
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (destlen >= destsize)
		return (destsize + srclen);
	if (destsize - destlen <= srclen)
	{
		ft_memcpy(dest + destlen, src, srclen);
		dest[destsize - 1] = 0;
	}
	else
		ft_memcpy(dest + destlen, src, srclen + 1);
	return (destlen + srclen);
}

// int main()
// {
//     char dst[100] = "123";
//     char *src = "abc";
//     printf(" моя функиця возвращает : %zu\n", strlcat(dst, NULL, 0));
//     // printf(" моя функиця возвращает : %zu\n", ft_strlcat(dst, NULL, 0));
//     printf("dst : %s", dst);
//     return 0;
// }
