/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:04:04 by alarroyo          #+#    #+#             */
/*   Updated: 2022/09/25 13:38:25 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)ptr1;
	s2 = (unsigned char *)ptr2;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i] && (i < n - 1)))
		i++;
	return ((int)(s1[i] - s2[i]));
}
