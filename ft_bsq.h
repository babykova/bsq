/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 20:08:52 by ehayes            #+#    #+#             */
/*   Updated: 2018/11/05 20:56:57 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

tepedef struct s_list
{
	int		size;
	char	empty;
	char	obs;
	char	full;
}			t_list;

t_list		ft_info(char *str)
{
	t_list info;
	int i;

	i = ft_nbr(str);
	info.size = ft_atoi(str);
	info.empty = str[i+1];
	info.obs = str[i + 2];
	info. full = str[i + 3];
}

