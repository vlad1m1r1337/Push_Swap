/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_simple_sort_1_bonus.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:09:02 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/05 11:56:49 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sort3(t_ps **a)
{
	if ((*a)->index == 2)
		ra(a);
	else if ((*a)->next -> index == 2)
		rra(a);
	if ((*a)->index > (*a)->next -> index)
		sa(a);
}

void	sort3_5(t_ps **a)
{
	if ((*a)->index == 3)
		ra(a);
	else if ((*a)->next -> index == 3)
		rra(a);
	if ((*a)->index > (*a)->next -> index)
		sa(a);
}

void	sort5_drop_2(t_ps **a, t_ps **b)
{
	if (who_closer(*a, 4, 1) == 1)
	{
		while ((*a)->index != 4)
			ra(a);
		pb(a, b);
	}
	else
	{
		while ((*a)->prev -> index != 4)
			rra(a);
		rra(a);
		pb(a, b);
	}
}

void	sort5_drop_2_in_a(t_ps **a, t_ps **b)
{
	if ((*b)->index == 0)
		pa(a, b);
	else
	{
		sb(b);
		pa(a, b);
	}
	if ((*b)->index == 4)
	{
		pa(a, b);
		ra(a);
	}
	else
	{
		sb(b);
		pa(a, b);
		ra(a);
	}
}

void	sort5(t_ps **a, t_ps **b)
{
	sort5_drop_2(a, b);
	if (who_closer(*a, 0, 1) == 1)
	{
		while ((*a)->index != 0)
			ra(a);
		pb(a, b);
	}
	else
	{
		while ((*a)->prev->index != 0)
			rra(a);
		rra(a);
		pb(a, b);
	}
	sort3_5(a);
	sort5_drop_2_in_a(a, b);
}
