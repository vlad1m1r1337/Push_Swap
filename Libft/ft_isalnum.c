/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:12:15 by vgribkov          #+#    #+#             */
/*   Updated: 2023/01/20 13:38:16 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	check;

	check = ft_isdigit(c) + ft_isalpha(c);
	if (check == 1)
		return (1);
	return (0);
}

/*int main(void)
{
	int c = 80;
	printf("%d\n-------\n", ft_isalnum(c));
	printf("%d", isalnum(c));
	return(0);
}*/
