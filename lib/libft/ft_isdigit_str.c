/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 22:54:04 by kcanales          #+#    #+#             */
/*   Updated: 2026/02/11 01:50:45 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit_str(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (ft_isdigit((int)(str[index])) || \
			str[index] == '-' || str[index] == '+')
		{
			index++;
			continue ;
		}
		return (0);
	}
	return (1);
}
