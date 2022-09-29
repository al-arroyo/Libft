/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:00:23 by alarroyo          #+#    #+#             */
/*   Updated: 2022/09/25 15:40:47 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_loop_header(char *a, char *b, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
}

static void	ft_loop_end(char *a, char *b, size_t n)
{
	size_t	i;

	i = n;
	while (i != 0)
	{
		i--;
		a[i] = b[i];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;

	a = (char *)dest;
	b = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (a < b)
		ft_loop_header(a, b, n);
	else
		ft_loop_end(a, b, n);
	return (dest);
}
