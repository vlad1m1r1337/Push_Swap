/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:21:15 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/04 13:05:46 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# include "../Libft/libft.h"

typedef struct s_ps
{
	int			number;
	int			index;
	struct s_ps	*next;
	struct s_ps	*prev;
}				t_ps;

//----------------Parsing----------------//

void	print_error_zero_arg(void);

void	print_error(void);

void	digit_checker(char **arg);

char	**parse_str(char **argv);

int		*do_arr_int(char **arr);

int		dup_check(char **arr, int i);

int		split_count(char **arr);

t_ps	*ft_lstnew(int data);

t_ps	*create_linked_list(int *num_arr, int count);

void	arr_free(char **arr);

t_ps	*parsing_validation(char **argv);

int		check_if_list_sorted(t_ps *list);

//----------------Operations----------------//

void	swap(t_ps **list);

void	rotate(t_ps **list);

void	reverse_rotate(t_ps **list);

void	push(t_ps **a, t_ps **b);

//----------------Push_cmds----------------//

void	sf_1(t_ps **stack_from, t_ps **stack_to);

void	st_0(t_ps **stack_from, t_ps **stack_to);

void	st_1(t_ps **stack_from, t_ps **stack_to);

void	st_2_sf_2(t_ps **stack_from, t_ps **stack_to);

void	sf_2_st_more_1(t_ps **stack_from, t_ps **stack_to);

//----------------Lists_ops----------------//

t_ps	*ft_lstnew(int data);

int		ft_lstsize(t_ps *head);

void	free_node(t_ps *a);

//----------------Rules----------------//

void	sa(t_ps **a);

void	sb(t_ps **b);

void	ss(t_ps **a, t_ps **b);

void	pa(t_ps **a, t_ps **b);

void	pb(t_ps **a, t_ps **b);

void	ra(t_ps **a);

void	rb(t_ps **b);

void	rr(t_ps **a, t_ps **b);

void	rra(t_ps **a);

void	rrb(t_ps **b);

void	rrr(t_ps **a, t_ps **b);

//----------------Rules----------------//

void	give_ls_index(t_ps *a);

t_ps	*find_no_index(t_ps *a);

//----------------Helpers----------------//

void	print_circular_list_a(t_ps *head);

void	print_circular_list_b(t_ps *head);

void	print_index_list(t_ps *head);

void	both_out(t_ps *head_a, t_ps *head_b);

//----------------Butterfly----------------//

int		ft_sqrt(int n);

int		butterfly(t_ps **a, t_ps **b);

//----------------Rethrow in a----------------//

void	take_upper(t_ps **a, t_ps **b, int c);

void	take_lower(t_ps **a, t_ps **b, int c);

int		who_closer(t_ps *b, int count, int aga);

void	sort_in_a(t_ps **a, t_ps **b, int counter);

//----------------Simple sort ----------------//

void	sort3(t_ps **a);

void	sort3_5(t_ps **a);

void	sort5_drop_2(t_ps **a, t_ps **b);

void	sort5_drop_2_in_a(t_ps **a, t_ps **b);

void	sort5(t_ps **a, t_ps **b);

void	simple_sort(t_ps **a, t_ps **b);

#endif