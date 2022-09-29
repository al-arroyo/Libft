/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:58:53 by alarroyo          #+#    #+#             */
/*   Updated: 2022/09/25 16:30:35 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**matrix(char const *s)
{
	char	**aux;
	size_t	i;

	i = 0;
	aux = (char **) malloc(ft_strlen(s) * sizeof(char *));
	while (i < ft_strlen(s))
	{
		aux[i] = (char *) malloc(ft_strlen(s) * sizeof(char));
		i++;
	}
	ft_bzero(aux, ft_strlen(*aux));
	return (aux);
}

static char	**split(char const *s, char c)
{
	char	**ret;
	int		i;
	int		j;

	ret = matrix(s);
	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] == c)
		{
			i++;
			j++;
		}
		ret[i][j] = s[j];
		j++;
	}
	ret[i][j] = 0;
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (split(s, c));
}
