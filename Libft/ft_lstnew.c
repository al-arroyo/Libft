/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:46:58 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/06 19:49:06 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lists;

	lists = ft_calloc(sizeof(t_list *), ft_strlen(content));
	if (!lists)
		return (NULL);
	lists->content = content;
	lists->next = NULL;
	return (lists);
}
