/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:16:57 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/25 16:16:59 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int **ft_check_double3_top(int **tab, int *value)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (i < 4)
    {
        if (value[i] == 3)
        {
            count++;
        }
        i++;
    }
    if(count == 2)
    {
        i = 0;
        while (i < 4)
        {
            if (value[i] == 2)
            {
                tab[0][i] = 3;
            }
            i++;
        }
    }
    return (tab);
}

int **ft_check_double3_down(int **tab, int *value)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (i < 4)
    {
        if (value[i] == 3)
        {
            count++;
        }
        i++;
    }
    if(count == 2)
    {
        i = 0;
        while (i < 4)
        {
            if (value[i] == 2)
            {
                tab[3][i] = 3;
            }
            i++;
        }
    }
    return (tab);
}

int **ft_check_double3_left(int **tab, int *value)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (i < 4)
    {
        if (value[i] == 3)
        {
            count++;
        }
        i++;
    }
    if(count == 2)
    {
        i = 0;
        while (i < 4)
        {
            if (value[i] == 2)
            {
                tab[i][0] =  3;
            }
            i++;
        }
    }
    return (tab);
}

int **ft_check_double3_right(int **tab, int *value)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (i < 4)
    {
        if (value[i] == 3)
        {
            count++;
        }
        i++;
    }
    if(count == 2)
    {
        i = 0;
        while (i < 4)
        {
            if (value[i] == 2)
            {
                tab[i][3] =  3;
            }
            i++;
        }
    }
    return (tab);
}