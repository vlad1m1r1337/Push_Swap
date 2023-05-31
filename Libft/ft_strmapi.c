/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:14:51 by vgribkov          #+#    #+#             */
/*   Updated: 2023/01/30 18:18:19 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ss;
	unsigned int	i;

	i = 0;
	ss = ft_strdup(s);
	if (!ss)
		return (NULL);
	while (s[i])
	{
		ss[i] = (*f)(i, s[i]);
		i++;
	}
	return (ss);
}
