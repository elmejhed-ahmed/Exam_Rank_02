/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:57:46 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/06/20 17:06:06 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int len(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
        i++;
    return i;
}
int main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i] == ' ' || (av[1][i] >= 9 && av[1][i] <= 13))
            i++;
        j = len(av[1]) - 1;
        while (av[1][j] == ' ' || (av[1][j] >= 9 && av[1][j] <= 13))
            j--;
        while (i <= j)
        {
            if (av[1][i] == ' ' || (av[1][i] >= 9 && av[1][i] <= 13))
            {
                write(1, "   ", 3);
                while (av[1][i] == ' ' || (av[1][i] >= 9 && av[1][i] <= 13))
                    i++;
            }
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}