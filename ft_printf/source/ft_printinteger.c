/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printinteger.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eportela <eportela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 08:15:12 by eportela          #+#    #+#             */
/*   Updated: 2022/11/12 11:11:23 by eportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printintegerv2(char *str, int n)
{
	int		size;
	int		i;

	i = 0;
	while (n > 1)
	{
		str[i] = (ft_abs(n % 10) + '0');
		n = (n / 10);
		i++;
	}
	size = i;
	while (i > 0)
	{
		ft_printchar(str[i]);
		i--;
	}
	free(str);
	return (size);
}

int	ft_printinteger(int number)
{
	char	*str;
	int		n;
	int		neg;

	n = number;
	neg = (number < 0);
	if (number == 0)
	{
		ft_printchar('0');
		return (1);
	}
	str = ft_calloc(11 + neg, sizeof(*str));
	if (str == NULL)
	{
		free(str);
		return (0);
	}
	free(str);
	return (ft_printintegerv2(str, n));
}
