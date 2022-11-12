/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eportela <eportela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:34:38 by eportela          #+#    #+#             */
/*   Updated: 2022/11/11 19:29:09 by eportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *toFill, int Filler, size_t nBytes)
{
	if (!toFill)
	{
		return (NULL);
	}
	while ((nBytes) != 0)
	{
	*(unsigned char *)(toFill + nBytes) = (unsigned char)Filler;
	nBytes--;
	}
	return (toFill);
}
