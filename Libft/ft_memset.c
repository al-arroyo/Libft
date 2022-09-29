/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:58:07 by alarroyo          #+#    #+#             */
/*   Updated: 2022/09/16 15:56:20 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*aux;
	unsigned char	x;

	aux = (unsigned char *)b;
	x = (unsigned char)c;
	while (n != 0)
	{
		*aux = x;
		aux++;
		n--;
	}
	return (b);
}
