/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaro <alvaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:49:25 by alarroyo          #+#    #+#             */
/*   Updated: 2022/09/30 20:47:43 by alvaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_first_cut(char *s1, char const *set)
{
	size_t	i;
	int		j;
	int		x;
	char	*str;

	i = 0;
	j = 0;
	str = s1;
	while (s1[i] != 0 && i < ft_strlen(set))
	{
		x = 0;
		while (set[x] != 0)
		{
			if (s1[i] != set[x])
			{
				str[j] = s1[i];
				j++;
			}
			x++;
		}
		i++;
	}
	str[i] = 0;
	return (str);
}

static char	*ft_last_cut(char *s1, char const *set)
{
	int		i;
	int		j;
	int		x;
	int		z;
	char	*str;

	str = s1;
	i = ft_strlen(s1) - 1;
	j = ft_strlen(s1) - 1;
	z = ft_strlen(set);
	while (i-- >= 0 && z-- >= 0)
	{
		x = 0;
		while (set[x] != 0)
		{
			if (s1[i] != set[x])
			{
				str[j] = s1[i];
				j--;
			}
			x++;
		}
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*aux;

	if (!s1 || !set)
		return (NULL);
	aux = ft_calloc(sizeof(char *), ft_strlen(s1));
	if (!aux)
		return (NULL);
	aux = (char *) s1;
	ft_first_cut(aux, set);
	ft_last_cut(aux, set);
	return (aux);
}
