/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:19:13 by tconwy            #+#    #+#             */
/*   Updated: 2021/10/11 10:19:18 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	c;

	c = 1;
	if (lst == 0)
		return (0);
	while (lst->next != NULL)
	{
		c++;
		lst = lst->next;
	}
	return (c);
}
