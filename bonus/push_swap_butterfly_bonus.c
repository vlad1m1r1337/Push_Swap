/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_butterfly_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:13:45 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/05 11:57:25 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_sqrt(int n)
{
	int	i;

	i = 2;
	while (i * i <= n)
		i++;
	return (i);
}

int	butterfly(t_ps **a, t_ps **b)
{
	int	size;
	int	counter;
	int	n;

	n = ft_sqrt(ft_lstsize(*a)) + 8;
	counter = 0;
	size = ft_lstsize(*a);
	while (counter < size)
	{
		if ((*a)->index <= counter)
		{
			pb(a, b);
			rb(b);
			counter++;
		}
		else if ((*a)->index <= counter + n)
		{
			pb(a, b);
			counter++;
		}	
		else
			ra(a);
	}
	return (counter - 1);
}
