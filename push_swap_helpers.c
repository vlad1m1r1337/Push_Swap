/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:51:18 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/02 18:16:15 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_circular_list_a(t_ps *head)
{
	t_ps	*current;

	current = head;
	write(1, "Stack a: ", 9);
	if (head == NULL)
	{
		write(1, "\n", 1);
		return ;
	}
	do
	{
		printf("%d ", current -> number);
		current = current->next;
}
while
(current != head)
	;
printf("\n");

}

void	print_circular_list_b(t_ps *head)
{
	t_ps	*current;

	current = head;
	write(1, "Stack b: ", 9);
	if (head == NULL)
	{
		write(1, "\n", 1);
		return ;
	}	
	do {
		printf("%d ", current -> number);
		current = current->next;
}
while
(current != head)
	;
printf("\n");

}

void	print_index_list(t_ps *head)
{
	t_ps	*current;

	current = head;
	write(1, "Index ", 6);
	if (head == NULL)
	{
		write(1, "\n", 1);
		return ;
	}	
	do
	{
		printf("%d ", current -> index);
		current = current -> next;
}
while
(current != head)
	;
printf("\n");

}

void	both_out(t_ps *head_a, t_ps *head_b)
{
	print_circular_list_a(head_a);
	print_circular_list_b(head_b);
}
