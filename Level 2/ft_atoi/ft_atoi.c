/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:11:41 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/05/28 17:13:14 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int i = 0;
    int num = 0;
    int sin = 1;
    
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sin *= -1;
        i++;
    }
    while (str[i] >=48 && str[i] <= 57)
    {
        num = num * 10 + str[i] - 48;
        i++;
    }
    return num * sin;
}
