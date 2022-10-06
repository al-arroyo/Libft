/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:58:53 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/06 19:03:07 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

static int	size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
}

static char	**matrix(void)
{
	char	**ret;
	int		count;
	int		count_row;

	count = 0;
	ret = (char **) malloc(1000 * sizeof(char *));
	while (count < 1000)
	{
		ret[count] = (char *) malloc(1000 * sizeof(char));
		count++;
	}
	count = 0;
	count_row = 0;
	while (count < 1000)
	{
		while (count_row < 1000)
		{
			ret[count][count_row] = '\0';
			count_row++;
		}
		count_row = 0;
		count++;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**strs;
	int		size;
	int		j;

	i = 0;
	j = 0;
	size = 0;
	strs = matrix();
	while (j++ < count_words(s, c))
	{
		while (s[i] == c)
			i++;
		size = size_word(s, c, i);
		strs[j] = ft_substr(s, i, size);
		if (!strs[j])
		{
			ft_free(strs, j);
			return (NULL);
		}
		i += size;
	}
	strs[j] = 0;
	return (strs);
}
