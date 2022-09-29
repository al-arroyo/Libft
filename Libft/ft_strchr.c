/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:14:18 by alarroyo          #+#    #+#             */
/*   Updated: 2022/09/25 13:52:07 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{	
	char	*aux;
	char	x;

	aux = (char *)s;
	x = (char)c;
	if (x == '\0')
	{
		while (*aux != x)
			aux++;
		return (aux);
	}
	while (*aux != '\0')
	{
		if (*aux == x)
			return (aux);
		aux++;
	}
	return (0);
}
