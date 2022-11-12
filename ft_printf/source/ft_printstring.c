/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eportela <eportela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 08:15:20 by eportela          #+#    #+#             */
/*   Updated: 2022/11/11 19:27:14 by eportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printstring(char *str)
{
	int	print_size;

	print_size = 0;
	if (*str == '\0')
	{
		return (0);
	}
	while (*str)
	{
		ft_printchar(*str);
		str++;
		print_size++;
	}
	return (print_size);
}
