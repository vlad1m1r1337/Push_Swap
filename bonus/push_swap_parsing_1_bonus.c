/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_parsing_1_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgribkov <vgribkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:17:48 by vgribkov          #+#    #+#             */
/*   Updated: 2023/05/05 11:57:08 by vgribkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	digit_checker(char **arg)
{
	int	i;
	int	j;

	i = 0;
	while (arg[i])
	{
		j = 0;
		if (arg[i][j] == '-')
			j++;
		while (arg[i][j])
		{
			if (!ft_isdigit(arg[i][j]))
				print_error();
			j++;
		}
		i++;
	}
}

char	**parse_str(char **argv)
{
	int		i;
	char	*str;
	char	**st;

	i = 1;
	str = (char *)malloc(sizeof(char));
	str[0] = 0;
	while (argv[i])
	{
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, argv[i]);
		i++;
	}
	st = ft_split(str, ' ');
	free(str);
	return (st);
}

int	*do_arr_int(char **arr)
{
	int		i;
	int		*num_arr;
	int		size;

	size = 0;
	while (arr[size])
		size++;
	num_arr = (int *)malloc(size * sizeof(int));
	i = 0;
	while (arr[i])
	{
		num_arr[i] = ft_atoi(arr[i]);
		i++;
	}
	return (num_arr);
}

int	dup_check(char **arr, int i)
{
	char	*temp;

	if (!arr[i])
		return (0);
	temp = arr[i];
	i++;
	while (arr[i])
	{
		if (ft_strncmp(arr[i], temp, ft_strlen(temp)) == 0 && ft_strncmp(arr[i],
				temp, ft_strlen(arr[i])) == 0)
		{
			print_error();
			return (0);
		}
		i++;
	}
	return (1);
}
