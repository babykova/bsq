/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mas.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 22:35:43 by ehayes            #+#    #+#             */
/*   Updated: 2018/11/05 23:04:39 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

char	**ft_array(t_story *a)
{
	char **array;
	char s;

	s = info.size;
	array = (char **)malloc(sizeof(char *)*s + 1);
	while (*a)
	{
		while (*a != '\n')
		{
			*array = *a;
			a++;
		}
		array++;
		a->next;
		next->data;
	}
	return (**array);
}
