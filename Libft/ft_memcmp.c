/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:40:31 by vgribkov          #+#    #+#             */
/*   Updated: 2023/01/26 15:52:28 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*ss1;
	unsigned const char	*ss2;
	size_t				i;

	ss1 = (unsigned const char *) s1;
	ss2 = (unsigned const char *) s2;
	i = 0;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
/*int	main(void)
{
    int result;
    const char s1[] = "a";
    char s2[] = "X";
    printf("%d\n--------BREAK--------\n", ft_memcmp(s1, s2, 1));
    printf("%d\n",                           memcmp(s1, s2, 1));

    return (0);
}*/
