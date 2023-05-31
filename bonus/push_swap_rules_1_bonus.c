/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rules_1_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:08:44 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/05 11:56:57 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa(t_ps **a)
{
	swap(a);
}

void	sb(t_ps **b)
{
	swap(b);
}

void	ss(t_ps **a, t_ps **b)
{
	swap(a);
	swap(b);
}

void	pa(t_ps **a, t_ps **b)
{
	push(b, a);
}

void	pb(t_ps **a, t_ps **b)
{
	push(a, b);
}
