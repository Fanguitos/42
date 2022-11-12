/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eportela <eportela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 07:59:43 by eportela          #+#    #+#             */
/*   Updated: 2022/11/11 19:04:01 by eportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	print_size;

	print_size = 0;
	if (format == 'c')
		print_size += ft_printchar(va_arg(args, int));
	if (format == 's')
		print_size += ft_printstring(va_arg(args, char *));
	if (format == 'p')
		print_size += ft_printpointer(va_arg(args, uintptr_t));
	if (format == 'd')
		print_size += ft_printinteger(va_arg(args, int));
	if (format == 'i')
		print_size += ft_printstring(va_arg(args, char *));
	if (format == 'u')
		print_size += ft_printstring(va_arg(args, char *));
	if (format == 'x')
		print_size += ft_printhexadecimal(va_arg(args, int), 'l');
	if (format == 'X')
		print_size += ft_printhexadecimal(va_arg(args, int), 'u');
	if (format == '%')
		print_size += ft_printpercent();
	return (print_size);
}
