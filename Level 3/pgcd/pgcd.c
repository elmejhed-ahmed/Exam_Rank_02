/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 12:46:01 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/06/24 11:57:25 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int nb1;
    int nb2;

    if (ac == 3)
    {
        nb1 = atoi(av[1]);
        nb2 = atoi(av[2]);
        if (nb1 > 0 && nb2 > 0)
        {
            while (nb1 != nb2)
            {
                if (nb1 > nb2)
                    nb1 -= nb2;
                else 
                    nb2 -= nb1;
            }
            printf("%d", nb1);
        }
    }
    printf("\n");
    return 0;
}
