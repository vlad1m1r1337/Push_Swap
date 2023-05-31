/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rules_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:08:44 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/04 11:59:45 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_ps **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_ps **b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_ps **a, t_ps **b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}

void	pa(t_ps **a, t_ps **b)
{
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_ps **a, t_ps **b)
{
	push(a, b);
	write(1, "pb\n", 3);
}
