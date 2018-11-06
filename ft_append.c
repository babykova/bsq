/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:01:18 by ehayes            #+#    #+#             */
/*   Updated: 2018/11/06 21:08:51 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_bsq.h"

void	ft_append(char ***arr, char *str, int i)
{
	int s;
	int st;
    int j;
    int a;

    a = 0;
    j = 0;
    st = ft_strlen(str);
	s = info.size;
	arr = (char **)malloc(sizeof(char *)*(s+1) + 1);
	arr[i] = (char *)malloc(sizeof(char)*st + 1);
	arr[i + 1] = NULL;
    while (src[a] != '\0')
    {
        arr[i][j] = src[a];
        a++;
        j++;
    }
    arr[i][j] = '\0';
}
