/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:14:17 by vgribkov          #+#    #+#             */
/*   Updated: 2023/01/25 12:15:58 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	v;

	str = (unsigned char *)b;
	v = (unsigned char)c;
	while (len > 0)
	{
		*str = v;
		str++;
		len--;
	}
	return (b);
}

/*int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore ft_memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str + 13, '.', 8*sizeof(char));

    printf("After ft_memset():  %s\n", str);

    char strr[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", strr);

    // Fill 8 characters starting from str[13] with '.'
    memset(strr + 13, '.', 8*sizeof(char));

    printf("After memset():  %s\n", strr);
    return 0;
}*/
