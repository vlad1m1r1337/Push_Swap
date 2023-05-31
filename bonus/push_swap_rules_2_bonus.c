/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rules_2_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:08:53 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/05 11:56:54 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ra(t_ps **a)
{
	rotate(a);
}

void	rb(t_ps **b)
{
	rotate(b);
}

void	rr(t_ps **a, t_ps **b)
{
	rotate(a);
	rotate(b);
}

void	rra(t_ps **a)
{
	reverse_rotate(a);
}

void	rrb(t_ps **b)
{
	reverse_rotate(b);
}
