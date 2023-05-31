/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_push_cases_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:07:16 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/05 11:57:02 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sf_1(t_ps **stack_from, t_ps **stack_to)
{
		(*stack_from)->next = *stack_to;
		(*stack_from)->prev = (*stack_to)->prev;
		(*stack_to)->prev = *stack_from;
		(*stack_to)->next = *stack_from;
		*stack_to = *stack_from;
		*stack_from = NULL;
}

void	st_0(t_ps **stack_from, t_ps **stack_to)
{
	t_ps	*sfn;
	t_ps	*sfp;

	sfn = (*stack_from)->next;
	sfp = (*stack_from)->prev;
	(*stack_from)->next = *stack_from;
	(*stack_from)->prev = *stack_from;
	sfp -> next = sfn;
	sfn -> prev = sfp;
	*stack_to = *stack_from;
	*stack_from = sfn;
}

void	st_1(t_ps **stack_from, t_ps **stack_to)
{
	t_ps	*tp;
	t_ps	*tn;

	tp = (*stack_from)->prev;
	tn = (*stack_from)->next;
	(*stack_from)->next = *stack_to;
	(*stack_from)->prev = (*stack_to)->prev;
	(*stack_to)->next = (*stack_from);
	(*stack_to)->prev = *stack_from;
	tp -> next = tn;
	tn -> prev = tp;
	*stack_to = *stack_from;
	(*stack_from) = tn;
}

void	st_2_sf_2(t_ps **stack_from, t_ps **stack_to)
{
	t_ps	*tp;
	t_ps	*tn;

	tp = (*stack_from)->prev;
	tn = (*stack_from)->next;
	(*stack_from)->next = *stack_to;
	(*stack_from)->prev = (*stack_to)->prev;
	(*stack_to)->prev -> next = *stack_from;
	(*stack_to)->prev = *stack_from;
	tp -> next = tn;
	tn -> prev = tp;
	*stack_to = *stack_from;
	(*stack_from) = tn;
}

void	sf_2_st_more_1(t_ps **stack_from, t_ps **stack_to)
{
	(*stack_from)->next = (*stack_to);
	(*stack_from)->prev = (*stack_to)->prev;
	(*stack_to)->prev -> next = *stack_from;
	(*stack_to)->prev = *stack_from;
	*stack_to = *stack_from;
	*stack_from = NULL;
}
