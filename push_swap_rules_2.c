/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rules_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:08:53 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/04 11:59:49 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_ps **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_ps **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_ps **a, t_ps **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}

void	rra(t_ps **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_ps **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}
