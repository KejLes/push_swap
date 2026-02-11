/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:15:28 by kcanales          #+#    #+#             */
/*   Updated: 2026/02/11 14:18:24 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *stack_a)
{
	int	first_number;

	first_number = stack_a->num[0];
	stack_a->num[0] = stack_a->num[1];
	stack_a->num[1] = first_number;
	ft_printf("sa\n");
}
