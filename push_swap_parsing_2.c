/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_parsing_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:32:27 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/05 12:42:59 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	split_count(char **arr)
{
	int	i;

	i = -1;
	while (arr[++i])
		;
	return (i);
}

t_ps	*create_linked_list(int *num_arr, int count)
{
	t_ps	*list;
	t_ps	*pointer;
	int		i;

	i = 1;
	list = ft_lstnew(num_arr[0]);
	pointer = list;
	while (i < count)
	{
		pointer -> next = ft_lstnew(num_arr[i]);
		pointer -> next -> prev = pointer;
		pointer = pointer -> next;
		i++;
	}
	pointer -> next = list;
	list -> prev = pointer;
	return (list);
}

void	arr_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int	check_if_list_sorted(t_ps *list)
{
	t_ps	*current;

	current = list -> next;
	while (current != list)
	{
		if (current -> number > current -> prev -> number)
			current = current -> next;
		else
			return (0);
	}
	return (1);
}

t_ps	*parsing_validation(char **argv)
{
	char	**arr;
	int		*num_arr;
	int		i;
	t_ps	*linked_list;
	int		count;

	num_arr = NULL;
	i = 0;
	arr = parse_str(argv);
	digit_checker(arr);
	while (dup_check(arr, i) && arr[i] != NULL)
		i++;
	count = split_count(arr);
	if (count == 1 && ft_atoi(argv[0]))
		exit(1);
	num_arr = do_arr_int(arr);
	arr_free(arr);
	linked_list = create_linked_list(num_arr, count);
	if (check_if_list_sorted(linked_list) == 1)
		exit(0);
	free(num_arr);
	give_ls_index(linked_list);
	return (linked_list);
}
