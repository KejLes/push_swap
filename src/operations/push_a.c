/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:14:40 by kcanales          #+#    #+#             */
/*   Updated: 2026/02/10 23:14:41 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Take the first element at the top of a and put it at the top of b. 
void	push_a(t_stack *stack_b, t_stack *stack_a)
{
	shift_forward(stack_b);
	stack_b->numbers[0] = stack_a->numbers[0];
	stack_b->count++;
	shift_backward(stack_a);
	stack_a->count--;
	ft_printf("pa\n");
}
