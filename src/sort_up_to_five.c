/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_up_to_five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:40:49 by rreimann          #+#    #+#             */
/*   Updated: 2026/02/11 14:18:24 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_2(t_stack *stack_a)
{
	if (!stack_sorted(stack_a))
		swap_a(stack_a);
}

static void	sort_3(t_stack *a)
{
	if (stack_sorted(a))
		return ;
	if (get_smallest_number_index(a) == 0)
	{
		rotate_print(a);
		swap_a(a);
		reverse_rotate_print(a);
	}
	else if (a->num[0] > a->num[1] && a->num[0] < a->num[2])
		swap_a(a);
	else if (a->num[0] < a->num[1])
		reverse_rotate_print(a);
	else if (a->num[0] > a->num[1] && a->num[0] > a->num[2])
	{
		rotate_print(a);
		if (a->num[1] < a->num[0])
			swap_a(a);
	}
}

static void	sort_4_or_5(t_stack *stack_a, t_stack *stack_b)
{
	int	smallest_index;
	int	index;

	index = 0;
	while (index < 2)
	{
		smallest_index = get_smallest_number_index(stack_a);
		bring_index_to_top(stack_a, smallest_index);
		push_b(stack_a, stack_b);
		index++;
	}
	sort_3(stack_a);
	while (index > 0)
	{
		push_a(stack_a, stack_b);
		index--;
	}
}

void	sort_up_to_five_values(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->count == 2)
		sort_2(stack_a);
	else if (stack_a->count == 3)
		sort_3(stack_a);
	else if (stack_a->count >= 4)
		sort_4_or_5(stack_a, stack_b);
}
