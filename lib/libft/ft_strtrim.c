/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:54:14 by kcanales          #+#    #+#             */
/*   Updated: 2026/02/10 23:54:14 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	char_in_pool(char *characters, char c)
{
	while (*characters != 0)
	{
		if (*characters == c)
		{
			return (1);
		}
		characters++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_index;
	size_t	end_index;
	size_t	str_len;

	str_len = ft_strlen(s1);
	start_index = 0;
	while (start_index < str_len && char_in_pool((char *)set, s1[start_index]))
		start_index++;
	end_index = str_len;
	while (end_index > start_index && \
		char_in_pool((char *)set, s1[end_index - 1]))
		end_index--;
	return (ft_substr(s1, start_index, end_index - start_index));
}
