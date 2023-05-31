/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_lists_op_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:16:00 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/05 11:57:34 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_ps	*ft_lstnew(int data)
{
	t_ps	*new_node;

	new_node = (t_ps *)malloc(sizeof(t_ps));
	if (!new_node)
		return (0);
	new_node -> index = -1;
	new_node -> number = data;
	new_node -> next = NULL;
	new_node -> prev = NULL;
	return (new_node);
}

int	ft_lstsize(t_ps *head)
{
	int		i;
	t_ps	*tmp;

	if (!head)
		return (0);
	i = 0;
	tmp = head;
	do
	{
		tmp = tmp -> next;
		i++;
}
while
(head -> number != tmp -> number)
	;
return (i);

}

void	free_node(t_ps *a)
{
	t_ps	*current;
	t_ps	*temp;

	current = a;
	do
	{
		temp = current;
		current = current -> next;
	free(temp);
}
while
(current != a);

}
