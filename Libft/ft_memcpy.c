/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:59:16 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/09 16:11:04 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;

	a = (char *)dest;
	b = (char *)src;
	if (!dest && !src)
		return (NULL);
	while (n != 0)
	{
		*a = *b;
		a++;
		b++;
		n--;
	}
	return (dest);
}

/*#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int		main(int argc, const char *argv[])
{
	void	*mem;
	int		arg;

	alarm(5);
	if (!(mem = malloc(sizeof(*mem) * 30)) || argc == 1)
		return (0);
	memset(mem, 'j', 30);
	if ((arg = atoi(argv[1])) == 1)
	{
		if (mem != ft_memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14))
			write(1, "dest's adress was not returned\n", 31);
		write(1, mem, 30);
	}
	else if (arg == 2)
	{
		if (mem != ft_memcpy(mem, "zyxwvutst", 0))
			write(1, "dest's adress was not returned\n", 31);
		write(1, mem, 30);
	}
	else if (arg == 3)
	{
		if (mem != ft_memcpy(mem, "zy\0xw\0vu\0\0tsr", 11))
			write(1, "dest's adress was not returned\n", 31);
		write(1, mem, 30);
	}
	return (0);
}*/