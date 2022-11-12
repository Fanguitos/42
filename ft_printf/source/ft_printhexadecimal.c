/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexadecimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eportela <eportela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:45:19 by eportela          #+#    #+#             */
/*   Updated: 2022/11/12 10:18:53 by eportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printhexadecimalv2(int toConvert, char form)
{
	if (toConvert < 10)
	{
		ft_printchar(toConvert + '0');
		return (1);
	}
	else
	{
		if (form == 'l')
		{
			ft_printchar(toConvert - 10 + 'a');
			return (1);
		}
		ft_printchar(toConvert - 10 + 'A');
		return (1);
	}
	return (-1);
}

int	ft_printhexadecimal(int toConvert, char form)
{
	int	size;

size = 0;
	if (form != 'u' && form != 'l')
		return (-1);
	while (toConvert != 0)
	{
		if (toConvert >= 16)
		{
			ft_hexadecimal(toConvert / 16, form);
			ft_printhexadecimal(toConvert % 16, form);
		}
		else
		{
			return (ft_printhexadecimalv2(toConvert, form));
		}
	}
}
