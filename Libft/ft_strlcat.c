/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:06:33 by alarroyo          #+#    #+#             */
/*   Updated: 2022/09/23 11:05:29 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	size_src;

	i = 0;
	j = 0;
	size_src = ft_strlen(src);
	while (dest[i] != 0 && i < dstsize)
		i++;
	while (src[j] != '\0' && (j + i + 1) < dstsize)
	{
		dest[j + i] = src[j];
		j++;
	}
	if (j != 0)
		dest[j + i] = '\0';
	return (size_src + i);
}
