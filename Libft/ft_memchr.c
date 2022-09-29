/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:02:23 by alarroyo          #+#    #+#             */
/*   Updated: 2022/09/25 13:27:29 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*aux;
	char	x;

	aux = (char *)s;
	x = (char)c;
	while (n != 0)
	{
		if (*aux == x)
			return ((void *)aux);
		aux++;
		n--;
	}
	return (NULL);
}
