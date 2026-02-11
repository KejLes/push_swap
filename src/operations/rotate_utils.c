/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:15:23 by kcanales          #+#    #+#             */
/*   Updated: 2026/02/10 23:15:24 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// First element becomes the last element of the stack
void	rotate_stack(t_stack *stack)
{
	int	first_number_save;

	first_number_save = stack->numbers[0];
	shift_backward(stack);
	stack->numbers[stack->count - 1] = first_number_save;
}

void	rotate_print(t_stack *stack)
{
	rotate_stack(stack);
	ft_printf("r%c\n", stack->stack_name);
}

void	bring_index_to_top(t_stack *stack, int index)
{
	if ((double)index < (double)stack->count / (double)2)
	{
		while (index > 0)
		{
			rotate_print(stack);
			index--;
		}
	}
	else
	{
		while (index < stack->count)
		{
			reverse_rotate_print(stack);
			index++;
		}
	}
}
