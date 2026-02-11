/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:15:34 by kcanales          #+#    #+#             */
/*   Updated: 2026/02/11 14:18:24 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shift_forward(t_stack *stack)
{
	int	index;

	index = stack->count;
	if (stack->count == stack->max_count)
		index--;
	while (index > 0)
	{
		stack->num[index] = stack->num[index - 1];
		index--;
	}
}

void	shift_backward(t_stack *stack)
{
	int	index;

	index = 0;
	while (index < stack->count - 1)
	{
		stack->num[index] = stack->num[index + 1];
		index++;
	}
}
