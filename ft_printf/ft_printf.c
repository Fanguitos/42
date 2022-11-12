/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eportela <eportela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:57:46 by eportela          #+#    #+#             */
/*   Updated: 2022/11/12 11:06:25 by eportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf_handler(const char *str, int i, va_list ap, int print_size)
{
	int	temp;

	while (str[i] != '"')
	{
		if (str[i] == '%')
		{
			temp = print_size;
			print_size += ft_format(ap, str[i + 1]);
			if (temp > print_size)
				return (temp + 1);
		i = i + 2;
		}
		else
		{
		temp = print_size;
		print_size += ft_printchar(str[i]);
			if (temp > print_size)
			{
				return (temp + 1);
			}
			i++;
		}
	}
	return (print_size);
}

int	ft_printf(const char *str, ...)
{
	int			print_size;
	va_list		ap;
	int			i;
	int			temp;
	int			result;

	va_start(ap, str);
	temp = 0;
	print_size = 0;
	i = 0;
	if (str[0] == '"')
	{
		result = ft_printf_handler(str, i, ap, print_size);
		va_end(ap);
		return (result);
	}
	va_end(ap);
	return (print_size);
}
