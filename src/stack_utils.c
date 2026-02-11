/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:16:01 by kcanales          #+#    #+#             */
/*   Updated: 2026/02/11 01:54:15 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	not_repeated_num(long num, int index, long *temp_array)
{
	if (index == 0)
		return (1);
	index--;
	while (index >= 0)
	{
		if (temp_array[index] == num)
			return (0);
		index--;
	}
	return (1);
}

// Create a function for `create_temp_array`
long	*create_temp_array(char **numbers_as_strings, int skip, int str_arr_len)
{
	int		index;
	long	*temp_array;

	temp_array = malloc(sizeof(long) * (str_arr_len - skip));
	if (temp_array == NULL)
		return (NULL);
	index = 0;
	while (numbers_as_strings[index + skip] != NULL)
	{
		if (ft_isdigit_str(numbers_as_strings[index + skip]) == 0)
			return (free(temp_array), NULL);
		temp_array[index] = ft_atoi(numbers_as_strings[index + skip]);
		if (temp_array[index] > INT_MAX || temp_array[index] < INT_MIN)
			return (free(temp_array), NULL);
		if (not_repeated_num(temp_array[index], index, temp_array) == 0)
			return (free(temp_array), NULL);
		index++;
	}
	return (temp_array);
}

int	get_smallest_index(long *arr, int arr_len)
{
	int		index;
	long	current_smallest;
	int		current_smallest_index;

	current_smallest = __LONG_MAX__;
	current_smallest_index = -1;
	index = 0;
	while (index < arr_len)
	{
		if (arr[index] <= current_smallest)
		{
			current_smallest = arr[index];
			current_smallest_index = index;
		}
		index++;
	}
	return (current_smallest_index);
}

int	get_next_smallest_index(long *temp_array,
	int current_smallest_index, int arr_len)
{
	int		index;
	int		next_smallest_index;
	long	diference;
	long	new_diference;

	index = 0;
	diference = -1;
	next_smallest_index = -1;
	if (current_smallest_index == -1)
		return (get_smallest_index(temp_array, arr_len));
	while (index < arr_len)
	{
		if (temp_array[index] > temp_array[current_smallest_index])
		{
			new_diference = (long)temp_array[index] - \
				(long)temp_array[current_smallest_index];
			if (new_diference < diference || diference == -1)
			{
				diference = new_diference;
				next_smallest_index = index;
			}
		}
		index++;
	}
	return (next_smallest_index);
}

int	stack_sorted(t_stack *stack)
{
	int	biggest_number;
	int	index;

	index = 1;
	if (stack->count < 2)
		return (1);
	biggest_number = stack->numbers[0];
	while (index < stack->count)
	{
		if (stack->numbers[index] > biggest_number)
			biggest_number = stack->numbers[index];
		else
			return (0);
		index++;
	}
	return (1);
}
