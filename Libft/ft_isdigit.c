/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:36:20 by vgribkov          #+#    #+#             */
/*   Updated: 2023/04/16 10:23:11 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	return ((unsigned char)(c >= '0' && c <= '9'));
}
// int	main()
// {
// 	char a = 50;
// 	printf("%d\n--------\n", ft_isdigit(a));
// 	printf("%d", isdigit(a));
// 	return(0);
// }
