/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mas.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 22:35:43 by ehayes            #+#    #+#             */
/*   Updated: 2018/11/05 23:42:26 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

char	**ft_array(char	*str)
{
	char **array;
	char s;
	int i;
	int j;
	int a;

	a = 0;
	i = 0;
	s = info.size;
	array = (char **)malloc(sizeof(char *)*s + 1);
	while (str[a])
	{
		j = 0;
		while (str[a] != '\n')
		{
			str[i][j] = str [a]
			a++;
			j++;
		}
		str[i][j + 1] = '\n';
		i++;
	}
	return (array);
}
