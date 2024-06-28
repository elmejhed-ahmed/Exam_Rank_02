/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:28:13 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/06/28 16:39:13 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_leng(long n)
{
    int c;

    c = 0;
    if (n < 0)
    {
        c ++;
        n *= -1;;
    }
    if (n == 0)
        return 1;
    while (n != 0)
    {
        n /= 10;
        c++;
    }
    return c;
}
char	*ft_itoa(int nbr)
{
    int leng;
    long nb;
    char *str;

    nb = nbr;
    leng = ft_leng(nb);
    str = (char *)malloc(sizeof(char) * leng + 1);
    if (!str)
        return NULL;
    str[leng] = '\0';
    if (nb < 0)
    {
        str[0] = '-';
        nb *= -1;
    }
    if (nb == 0)
        str[0] = '0';
    while (nb != 0)
    {
        str[leng - 1] = (nb % 10) + 48;
        nb /= 10;
        leng --;
    }
    return str;
}