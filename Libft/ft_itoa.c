/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:31:21 by vgribkov          #+#    #+#             */
/*   Updated: 2023/01/30 14:54:06 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_len(int c)
{
	int	count;

	count = 0;
	if (c == 0)
		return (1);
	if (c < 0)
	{
		c = -c;
		count++;
	}
	while (c != 0)
	{
		c /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int c)
{
	int				i;
	char			ch;
	unsigned int	uns;
	char			*num;

	num = (char *)malloc(count_len(c) + 1);
	if (!num)
		return (NULL);
	num[count_len(c)] = '\0';
	i = count_len(c) - 1;
	if (c < 0)
	{
		uns = (-1) * c;
		num[0] = '-';
	}
	else
		uns = c;
	while (uns >= 10)
	{
		ch = (uns % 10) + '0';
		num[i--] = ch;
		uns /= 10;
	}
	num[i] = (uns % 10) + '0';
	return (num);
}

/*int main()
{
  int c = -23356;
  printf("%s", ft_itoa(c));
  return 0;
}*/
