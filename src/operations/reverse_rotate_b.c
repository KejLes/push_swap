/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:14:57 by kcanales          #+#    #+#             */
/*   Updated: 2026/02/10 23:14:58 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack *stack)
{
	int	last_number_save;

	last_number_save = stack->numbers[stack->count - 1];
	shift_forward(stack);
	stack->numbers[0] = last_number_save;
}

void	reverse_rotate_print(t_stack *stack)
{
	reverse_rotate(stack);
	ft_printf("rr%c\n", stack->stack_name);
}
