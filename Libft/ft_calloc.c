/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:41:50 by alarroyo          #+#    #+#             */
/*   Updated: 2022/09/25 14:05:25 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ret;
	size_t	i;

	ret = (char *) malloc(nmemb * size);
	if (!ret)
		return (0);
	i = 0;
	while (i < (nmemb * size))
	{
		ret[i] = '\0';
		i++;
	}
	return ((void *)ret);
}

//ft_bzero(ret, nmemb * size);