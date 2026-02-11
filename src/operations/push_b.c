/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:14:49 by kcanales          #+#    #+#             */
/*   Updated: 2026/02/10 23:14:51 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Take the first element at the top of a and put it at the top of b. 
void	push_b(t_stack *stack_a, t_stack *stack_b)
{
	shift_forward(stack_b);
	stack_b->numbers[0] = stack_a->numbers[0];
	stack_b->count++;
	shift_backward(stack_a);
	stack_a->count--;
	ft_printf("pb\n");
}
