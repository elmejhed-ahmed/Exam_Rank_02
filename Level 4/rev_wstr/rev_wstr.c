/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:54:41 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/06/10 16:54:51 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while(av[1][i])
            i++;
        i--;
        while(i > 0)
        {   
            while (av[1][i] == ' ' || av[1][i] == '\t')
                i--;
            int j = i;
            while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
                i--;
            int k = i + 1;
            int flag  = k;
            while (k <= j)
            {
                write(1, &av[1][k], 1);
                k++;
            }
            if (flag != 0)
                write(1, " ", 1);
            i--;
        }
    }
    write(1, "\n", 1);
    return 0;
}