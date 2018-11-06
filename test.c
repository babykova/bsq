/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 21:46:59 by ehayes            #+#    #+#             */
/*   Updated: 2018/11/06 21:51:16 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_ans(int **ar)
{
    int i;
    int j;
    
    i = 0;
    while (ar[i])
    {
        j = 0;
        while (ar[i][j])
        {
            printf("%d", ar[i][j]);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}

int     **ft(int **ar, char **arr, char obs, char empty)
{
    int     i;
    int     j;
    int     s;
    
    i = 0;
    s = 0;
    while (arr[i])
    {
        j = 0;
        while(arr[i][j])
        {
            if (arr[i][j] == empty)
            {
                ar[i][j] = s;
                printf("%d", ar[i][j]);
            }
            else if (arr[i][j] == obs)
            {
                s += 1;
                ar[i][j] = s;
                printf("%d", ar[i][j]);
                
            }
            else
            {
                ar[i][j] = arr[i][j];
                printf("%d", ar[i][j]);
            }
            j++;
        }
        i++;
    }
    return (ar);
}

void    ft_ft(char **arr)
{
    int     **ar;
    char    empty;
    char    obs;
    int     size;
    int     k;
    
    k = 0;
    empty = '.';
    obs = 'o';
    size = 3;
    ar = (int **)malloc(sizeof(int*) * (size + 1));
    printf("%p\n", ar);
    while (k < size)
    {
        ar[k] = (int *)malloc(sizeof(int) * (size + 1));
        printf("%p\n", ar[k]);
        k++;
    }
    ar = ft(ar, arr, obs, empty);
    ft_print_ans(ar);
}



int main(int argc, char **argv)
{
    ft_ft(argv);
    return 0;
}
