/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:49:25 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/06 18:52:17 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	start(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	i = 0;
	while (ft_strchr(set, s1[i]) != 0)
		i ++;
	return (i);
}

static int	end(char const *s1, char const *set)
{
	size_t	len;
	size_t	j;

	len = ft_strlen(s1);
	j = 0;
	while (ft_strchr(set, s1[len - j - 1]) != 0)
		j++;
	return (len - j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*aux;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = start(s1, set);
	j = end(s1, set);
	if (i >= j)
		return (ft_strdup(""));
	aux = ft_calloc(sizeof(char *), j - i + 1);
	if (!aux)
		return (NULL);
	ft_strlcpy(aux, (char *)(s1 + i), j - i + 1);
	return (aux);
}
