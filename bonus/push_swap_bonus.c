/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:35:24 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/05 14:41:35 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include "get_next_line_bonus.h"

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 && *str1 - *str2 == 0)
	{
		str1++;
		str2++;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}

void	do_cmds(t_ps **a, t_ps **b, char *str)
{
	str[ft_strlen(str) - 1] = '\0';
	if (ft_strcmp("sa", str) == 0)
		sa(a);
	else if (ft_strcmp("sb", str) == 0)
		sb(b);
	else if (ft_strcmp("ss", str) == 0)
		ss(a, b);
	else if (ft_strcmp("pa", str) == 0)
		pa(a, b);
	else if (ft_strcmp("pb", str) == 0)
		pb(a, b);
	else if (ft_strcmp("ra", str) == 0)
		ra(a);
	else if (ft_strcmp("rb", str) == 0)
		rb(b);
	else if (ft_strcmp("rr", str) == 0)
		rr(a, b);
	else if (ft_strcmp("rra", str) == 0)
		rra(a);
	else if (ft_strcmp("rrb", str) == 0)
		rrb(b);
	else if (ft_strcmp("rrr", str) == 0)
		rrr(a, b);
	else
		print_error();
}

int	main(int argc, char **argv)
{
	t_ps	*a;
	t_ps	*b;
	char	*str;

	b = NULL;
	if (argc < 2)
		exit(1);
	a = parsing_validation(argv);
	while (1)
	{
		str = get_next_line(0);
		if (!str || !*str)
		{
			free(str);
			break ;
		}
		do_cmds(&a, &b, str);
		free(str);
	}
	if (check_if_list_sorted(a) == 1 && b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
