/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:38:19 by tconwy            #+#    #+#             */
/*   Updated: 2021/10/06 16:41:15 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *p, size_t a)
{
	char	*h;
	size_t	d;

	h = (char *)p;
	d = 0;
	while (d < a)
	{
		h[d] = '\0';
		d++;
	}
	return (*p);
}
