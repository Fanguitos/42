/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fixpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eportela <eportela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 08:15:17 by eportela          #+#    #+#             */
/*   Updated: 2022/11/11 18:57:25 by eportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	fixpointer(uintptr_t pointer)
{
	int	size;

	size = 0;
	while (pointer != 0)
	{
		if (pointer >= 16)
		{
			ft_fixpointer(pointer / 16);
			ft_fixpointer(pointer % 16);
		}
		else
		{
			if (pointer < 10)
			{
				ft_printchar(pointer + '0');
				return (1);
			}
			else
			{
				ft_printchar(pointer - 10 + 'a');
				return (1);
			}
		}
	}
	return (-1);
}
