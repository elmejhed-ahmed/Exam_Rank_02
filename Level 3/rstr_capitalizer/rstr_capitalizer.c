/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:50:51 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/06/24 15:24:03 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac > 1)
    {
        j = 1;
        while(av[j])
        {
            i = 0;
            while(av[j][i])
            {
                if (av[j][i] >= 'A' && av[j][i] <= 'Z')
                    av[j][i] += 32;
                if(av[j][i + 1] == '\0' || av[j][i + 1] == ' ' || (av[j][i + 1] >= 9 && av[j][i + 1] <= 13))
                {
                    if (av[j][i] >= 'a' && av[j][i] <= 'z')
                        av[j][i] -= 32;
                }
                write(1, &av[j][i], 1);
                i++;
            }
            write(1, "\n", 1);
            j++;
        }
    }
    if (ac == 1 )
        write(1, "\n", 1);
}