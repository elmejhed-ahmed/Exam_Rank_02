/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:59:57 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/05/28 21:12:30 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char *str, char c)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}
int main(int ac, char **av)
{
    int i = 0;
    
    char str[160];
    if (ac == 3)
    {
        while (*av[1])
        {
            if (check(av[2], *av[1]) && !check(str, *av[1]))
            {
                write(1, av[1], 1);
                str[i] = *av[1];
                i++;
            }
            av[1] ++;
        }
    }
    write (1,"\n",1);
}
