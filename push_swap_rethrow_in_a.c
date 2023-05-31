/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rethrow_in_a.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:13:13 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/02 18:16:37 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	take_upper(t_ps **a, t_ps **b, int c)
{
	while ((*b)->index != c)
		rb(b);
	pa(a, b);
}

void	take_lower(t_ps **a, t_ps **b, int c)
{
	while ((*b)->prev -> index != c)
		rrb(b);
	rrb(b);
	pa(a, b);
}

int	who_closer(t_ps *b, int count, int aga)
{
	int		score_u;
	int		score_l;
	t_ps	*b_dup;

	b_dup = b;
	score_u = 0;
	score_l = 0;
	while (b -> index != count && score_u < aga)
	{
		rotate(&b);
		score_u++;
	}
	while (b_dup -> prev -> index != count && score_l < aga)
	{
		reverse_rotate(&b);
		score_l++;
	}
	if (score_u < score_l)
		return (1);
	else
		return (0);
}

void	sort_in_a(t_ps **a, t_ps **b, int counter)
{
	int	aga;

	aga = ft_sqrt(ft_lstsize(*b));
	while ((*b) != NULL)
	{
		if (who_closer(*b, counter, aga))
			take_upper(a, b, counter);
		else
			take_lower(a, b, counter);
		counter--;
	}
}
