/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eportela <eportela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:28:21 by eportela          #+#    #+#             */
/*   Updated: 2022/11/11 19:25:51 by eportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printpointer(int pointer)
{
	int	print_size;

	print_size = 2;
	write (1, "0x", 2);
	if (pointer == 0)
	{
		print_size += write(1, "0", 1);
	}
	else
	{
		print_size += ft_fixpointer(pointer);
	}
	return (print_size);
}
