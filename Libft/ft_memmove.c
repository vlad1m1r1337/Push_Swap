/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:28:27 by vgribkov          #+#    #+#             */
/*   Updated: 2023/01/30 18:11:39 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	int					i;

	s = (unsigned const char *) src;
	d = (unsigned char *) dst;
	if (!src && !dst)
		return (0);
	if (src > dst)
	{
		ft_memcpy(dst, src, n);
		return (dst);
	}
	i = n - 1;
	while (i >= 0)
	{
		d[i] = s[i];
		i--;
	}
	return (dst);
}
/*int main() {
	char s[] = "123456";
	char c[] = "123456";

	memmove(s, s + 3, 3);
	printf("orig d: %s\n----------\n", s);

	ft_memmove(c, c + 3, 3);
	printf("my   e: %s\n", c);

	return (0);
}*/
