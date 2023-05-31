/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memspy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:33:01 by vgribkov          #+#    #+#             */
/*   Updated: 2023/01/30 17:23:44 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	size_t				i;

	s = (unsigned const char *) src;
	d = (unsigned char *) dst;
	i = 0;
	if (!s && !d)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*int main() {
	char s[] = "123456";
	char d[27];
	char c[] = "123456";
	char e[27];
	
	memcpy(s,s + 1 , 1);
	printf("orig d: %s\n----------\n", s);
	
	ft_memcpy(c,c + 1 , 1);
	printf("my   e: %s\n", c);
	return (0);
}*/
