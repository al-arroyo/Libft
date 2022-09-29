/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:57:27 by alarroyo          #+#    #+#             */
/*   Updated: 2022/09/23 11:49:32 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*aux;
	size_t	size;
	char	*aux2;

	size = ft_strlen(s) + 1;
	aux = (char *) malloc (size * sizeof(char));
	aux2 = aux;
	if (!aux)
		return (NULL);
	while (size > 1)
	{
		*aux = (char)*s;
		aux++;
		s++;
		size--;
	}
	*aux = 0;
	return (aux2);
}
