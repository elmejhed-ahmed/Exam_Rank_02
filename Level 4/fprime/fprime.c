/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:47:23 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/06/28 13:25:12 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int nbr;
    int i;

    if (ac == 2)
    {
        nbr = atoi(av[1]);
        i = 1;
        if (nbr == 1)
            printf("1");
        while (nbr >= ++i)
        {
            if (nbr % i == 0)
            {
                printf("%d", i);
                if (nbr == i)
                    break;
                printf("*");
                nbr /= i;
                i = 1;
            }
        }
    }
    printf("\n");
    return 0;
}