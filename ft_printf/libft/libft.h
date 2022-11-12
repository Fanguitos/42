/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eportela <eportela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:42:11 by eportela          #+#    #+#             */
/*   Updated: 2022/11/12 10:06:14 by eportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_abs(int number);
void	ft_bzero(void *toEmpty, size_t nBytes);
void	*ft_memset(void *toFill, int Filler, size_t nBytes);
void	*ft_calloc(size_t count, size_t size);

#endif