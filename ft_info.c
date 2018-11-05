/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 21:33:20 by ehayes            #+#    #+#             */
/*   Updated: 2018/11/05 21:49:12 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

t_list	ft_info(char str)
{
	t_list	info;
	int 	i;

	i = ft_nbr(str);
	info.size = ft_atoi(str);
	info.empty = str[i+1];
	info.obs = str[i + 2];
	info. full = str[i + 3];
}
