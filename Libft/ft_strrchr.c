/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:16:29 by alarroyo          #+#    #+#             */
/*   Updated: 2022/09/21 21:02:50 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{	
	char	*aux;
	char	x;

	aux = (char *)s;
	x = (char)c;
	while (*aux != '\0')
		aux++;
	if (x == '\0')
		return (aux);
	while (*aux != x)
	{
		aux--;
		if (*aux == x)
			return (aux);
		else if (*aux == *s)
			return (0);
	}
	return (0);
}

/*#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(int argc, const char *argv[])
{
	char		*str;
	char		str2[] = "bonjour";
	int			arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		if (!(str = ft_strrchr(str2, 'b')))
			ft_print_result("NULL");
		else
		{
			ft_print_result(str);
			if (str != str2)
				ft_print_result("\nReturn value is false");
		}
	}
	else if (arg == 2)
	{
		if (!(str = ft_strrchr(str2, 'o')))
			ft_print_result("NULL");
		else
		{
			ft_print_result(str);
			if (str != str2 + 4)
				ft_print_result("\nReturn value is false");
		}
	}
	else if (arg == 3)
	{
		char	str3[]= "bonjourno";
		if (!(str = ft_strrchr(str3, 'o')))
			ft_print_result("NULL");
		else
		{
			ft_print_result(str);
			if (str != str3 + 8)
				ft_print_result("\nReturn value is false");
		}
	}
	else if (arg == 4)
	{
		if (!(str = ft_strrchr(str2, 'j')))
			ft_print_result("NULL");
		else
		{
			ft_print_result(str);
			if (str != str2 + 3)
				ft_print_result("\nReturn value is false");
		}
	}
	else if (arg == 5)
	{
		if (!(str = ft_strrchr(str2, 's')))
			ft_print_result("NULL");
		else
			ft_print_result(str);
	}
	else if (arg == 6)
	{
		if (!(str = ft_strrchr(str2, '\0')))
			ft_print_result("NULL");
		else
		{
			ft_print_result(str);
			if (str != str2 + 7)
				ft_print_result("\nReturn value is false");
		}
	}
	else if (arg == 7)
	{
		char	str3[] = "";
		if (!(str = ft_strrchr(str3, '\0')))
			ft_print_result("NULL");
		else
		{
			ft_print_result(str);
			if (str != str3)
				ft_print_result("\nReturn value is false");
		}
	}
	else if (arg == 8)
	{
		if (!(str = ft_strrchr(str2 + 2, 'b')))
			ft_print_result("NULL");
		else
			ft_print_result(str);
	}
	return (0);
}*/