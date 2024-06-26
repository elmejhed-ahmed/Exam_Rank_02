/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:01:55 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/04/24 17:07:56 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    if (ac > 1)
    {
        while (av[1][i])
        {
            if ((av[1][i] >= 97 && av[1][i] <= 109) || (av[1][i] >= 65 && av[1][i] <= 77))
                av[1][i] += 13;
            else if ((av[1][i] > 109 && av[1][i] <= 122) || (av[1][i] > 77 && av[1][i] <= 90))
                av[1][i] -= 13;
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}