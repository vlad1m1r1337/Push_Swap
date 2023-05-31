/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:58:02 by vgribkov          #+#    #+#             */
/*   Updated: 2023/01/24 21:00:30 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
/*int	main(void)
{
	unsigned int n = 3;
  char dest[4] = "aX";
  char src[] = "zxc";
  printf("%lu\n", ft_strlcpy(dest, src, n));
  printf("%s\n", dest);
  char des[4] = "aX";
  char sr[] = "zxc";
  printf("%lu\n", strlcpy(des, sr, n));
  strlcpy(des , sr, n);
  printf("%s", des);
  return (0);
}*/
