/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:12:20 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/06 19:25:14 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	str = ft_calloc(sizeof(char *), ft_strlen(s));
	i = 0;
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(ft_strlen(s), str[i]);
		i++;
	}
	return (str);
}
