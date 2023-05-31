/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:46:59 by vgribkov          #+#    #+#             */
/*   Updated: 2023/01/25 19:47:02 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_out(int nb, int fd)
{
	int	last;

	last = nb % 10;
	if (nb > 9)
	{
		nb = nb / 10;
		ft_out(nb, fd);
	}
	ft_putchar_fd(last + '0', fd);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar_fd('-', fd);
		ft_out(nb, fd);
	}
	else
		ft_out(nb, fd);
}
