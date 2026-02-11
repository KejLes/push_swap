/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:17:01 by kcanales          #+#    #+#             */
/*   Updated: 2026/02/11 14:18:24 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <limits.h>
# include "libft.h"

typedef struct s_stack
{
	char	stack_name;
	int		*num;
	int		count;
	int		max_count;
}			t_stack;

t_stack	*initialize_stack(char **numbers_as_strings, int skip);
t_stack	*initialize_stack_empty(int length);
void	free_stack(t_stack *stack);
void	print_stack(t_stack *stack);
void	push_swap_sort(t_stack *stack_a, t_stack *stack_b);
void	sort_up_to_five_values(t_stack *stack_a, t_stack *stack_b);

// OPERATIONS
void	swap_a(t_stack *stack_a);
void	push_b(t_stack *stack_a, t_stack *stack_b);
void	push_a(t_stack *stack_b, t_stack *stack_a);
void	rotate_a(t_stack *stack_a);
void	rotate_b(t_stack *stack_b);
void	rotate_ab(t_stack *stack_a, t_stack *stack_b);
void	reverse_rotate_print(t_stack *stack);

// OPERATION UTILS
void	shift_forward(t_stack *stack);
void	shift_backward(t_stack *stack);
void	rotate_stack(t_stack *stack);
void	reverse_rotate(t_stack *stack);
void	rotate_print(t_stack *stack);
void	bring_index_to_top(t_stack *stack, int index);

// STACK UTILS
int		not_repeated_num(long num, int index, long *temp_array);
long	*create_temp_array(char **numbers_as_strings,
			int skip, int str_arr_len);
int		get_smallest_index(long *arr, int arr_len);
int		get_next_smallest_index(long *temp_array,
			int current_smallest_index, int arr_len);
int		stack_sorted(t_stack *stack);
int		get_biggest_number_index(t_stack *stack);
int		get_smallest_number_index(t_stack *stack);

#endif
