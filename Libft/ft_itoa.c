/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:23:49 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/09 18:05:44 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_len(int n)
{
	long int	len;

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

static char	*ft_string(char *aux, unsigned int number, long int len)
{
	while (number > 0)
	{
		aux[len--] = '0' + (number % 10);
		number = number / 10;
	}
	return (aux);
}

char	*ft_itoa(int n)
{
	char				*aux;
	long int			len;
	unsigned int		number;

	len = ft_len(n);
	aux = malloc(sizeof(char) * (len + 1));
	if (!aux)
		return (NULL);
	aux[len--] = 0;
	if (n == 0)
	{
		*aux = '0';
	}
	if (n < 0)
	{
		n *= -1;
		aux[0] = '-';
	}
	number = n;
	aux = ft_string(aux, number, len);
	return (aux);
}
