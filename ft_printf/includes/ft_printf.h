/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eportela <eportela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:31:18 by eportela          #+#    #+#             */
/*   Updated: 2022/11/12 10:04:50 by eportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include	<stdarg.h>
# include	<stdint.h>
# include	<stdio.h>

int	ft_printf(const char *str, ...);
int	ft_printchar(int c);
int	ft_format(va_list args, const char format);
int	ft_printinteger(int number);
int	ft_printpercent(void);
int	ft_printstring(char	*str);
int	ft_printpointer(int pointer);
int	ft_printhexadecimal(int toConvert, char form);
int	ft_fixpointer(uintptr_t pointer);

#endif