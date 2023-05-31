/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_get_index.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:31:54 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/02 18:16:11 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps	*find_no_index(t_ps *a)
{
	t_ps	*current;

	current = a;
	do
		current = current -> next;
	while (current -> index != -1 && current != a)
		;
	return (current);
}

void	give_ls_index(t_ps *a)
{
	t_ps	*current;
	t_ps	*lowest;
	int		i;
	int		size;

	i = 0;
	size = ft_lstsize(a);
	lowest = a;
	while (i < size)
	{
		current = a;
		do
		{
			if (current -> index != -1)
				;
		else if (current -> number < lowest -> number)
				lowest = current;
			current = current -> next;
	}
	while (current != a)
		;
	lowest -> index = i;
	lowest = find_no_index(a);
	i++;
}
}
