/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:14:59 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/04/24 10:01:46 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 1;
    int r = 0;
    if (ac > 1)
    {
        while(av[j])
        {
            while(av[j][i])
            {
                if (av[j][i] >= 97 && av[j][i] <= 122)
                    r = av[j][i] - 96;
                else if (av[j][i] >= 65 && av[j][i] <= 90)
                    r = av[j][i] - 64;
                else
                    write (1, &av[j][i], 1);
                while (r != 0)
                {
                    write(1, &av[j][i], 1);
                    r--;
                }
                r = 0;
                i++;
            }
            j++;
        }
    }
    write (1 , "\n", 1);
    return 0;
}