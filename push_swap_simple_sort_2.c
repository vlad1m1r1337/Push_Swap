/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_simple_sort_2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:10:00 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/05 12:43:18 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simple_sort(t_ps **a, t_ps **b)
{
	if (ft_lstsize(*a) == 2)
		sa(a);
	if (ft_lstsize(*a) == 3)
		sort3(a);
	if (ft_lstsize(*a) == 4)
		return ;
	if (ft_lstsize(*a) == 5)
		sort5(a, b);
	exit(0);
}
