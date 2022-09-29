/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:23:49 by alarroyo          #+#    #+#             */
/*   Updated: 2022/09/25 17:54:05 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*aux;
	int		i;

	aux = ft_calloc(sizeof(char), n);
	if (!aux)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (n < 10)
			aux[i] = n;
		else if (n > 10 && n < 100)
		{
			aux[i] = n / 10;
			aux[i + 1] = n % 10;
		}
		i++;
	}
	return (aux);
}
