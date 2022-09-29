/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaro <alvaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:23:49 by alarroyo          #+#    #+#             */
/*   Updated: 2022/09/29 20:34:53 by alvaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*ft_string(int n)
{
	char	*aux;
	size_t	i;

	i = 0;
	aux = NULL;
	while (i < ft_len(n))
	{
		aux[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	return (aux);
}

char	*ft_itoa(int n)
{
	char	*aux;

	aux = ft_calloc(sizeof(char), n);
	if (!aux)
		return (NULL);
	if (n < 0)
	{
		*aux = '-';
		aux++;
	}
	aux = ft_string(n);
	return (aux);
}
