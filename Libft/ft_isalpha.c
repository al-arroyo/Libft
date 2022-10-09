/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:54:01 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/09 18:54:30 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_isalpha() returns 1 
 * if the character passed as an argument is an alphabetic
 * character, and 0 if it is not
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if the character is a letter, 0 if not.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
