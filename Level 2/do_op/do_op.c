/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:59:05 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/04/30 14:09:56 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        if (av[2][0] == '+')
            printf("%d", (atoi(av[1]) + atoi(av[3])));
        if (av[2][0] == '/')
            printf("%d", (atoi(av[1]) / atoi(av[3])));
        if (av[2][0] == '%')
            printf("%d", (atoi(av[1]) % atoi(av[3])));
        if (av[2][0] == '-')
            printf("%d", (atoi(av[1]) - atoi(av[3])));
        if (av[2][0] == '*')
            printf("%d", (atoi(av[1]) * atoi(av[3])));
    }
    printf("\n");
}