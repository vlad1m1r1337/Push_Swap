/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:56:08 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/04 15:57:15 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_ps **list)
{
	t_ps	*tmp;

	if (ft_lstsize(*list) <= 1)
		exit(1);
	tmp = (*list)->next;
	(*list)->prev -> next = tmp;
	(*list)->next = tmp -> next;
	tmp -> next = tmp -> prev;
	tmp -> prev = tmp -> prev -> prev;
	(*list)->prev = tmp;
	(*list)->next -> prev = tmp -> next;
	*list = tmp;
}

void	rotate(t_ps **list)
{
	if (ft_lstsize(*list) <= 1)
		return ;
	*list = (*list)->next;
}

void	reverse_rotate(t_ps **list)
{
	if (ft_lstsize(*list) <= 1)
		return ;
	*list = (*list)->prev;
	return ;
}

void	push(t_ps **stack_from, t_ps **stack_to)
{
	t_ps	*sfn;
	t_ps	*sfp;

	if (ft_lstsize(*stack_from) == 0)
		return ;
	sfn = (*stack_from)->next;
	sfp = (*stack_from)->prev;
	if (ft_lstsize(*stack_to) == 0)
		st_0(stack_from, stack_to);
	else if (ft_lstsize(*stack_from) == 1 && ft_lstsize(*stack_to) < 2)
		sf_1(stack_from, stack_to);
	else if (ft_lstsize(*stack_to) == 1)
		st_1(stack_from, stack_to);
	else if (ft_lstsize(*stack_from) == 1 && ft_lstsize(*stack_to) > 1)
		sf_2_st_more_1(stack_from, stack_to);
	else if (ft_lstsize(*stack_to) >= 2 && ft_lstsize(*stack_from) >= 2)
		st_2_sf_2(stack_from, stack_to);
}
