/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:35:24 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/05 12:43:08 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	*a;
	t_ps	*b;
	int		counter;

	b = NULL;
	if (argc < 2)
		exit(1);
	a = parsing_validation(argv);
	if (ft_lstsize(a) <= 5)
		simple_sort(&a, &b);
	counter = butterfly(&a, &b);
	sort_in_a(&a, &b, counter);
}
