/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:04:36 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/04/23 21:12:55 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void ft_putnbr(unsigned int nb)
{
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else if (nb <= 9 && nb >= 0)
    {
        nb += 48;
        write(1, &nb, 1);
    }
}
int main()
{
    int i = 1;
    
    while(i <= 100)
    {
        if (i <= 100)
        {
            if (i % 3 == 0 && i % 5 == 0)
                write(1, "fizzbuzz", 8);
            else if (i % 3 == 0)
                write(1, "fizz", 4);
            else if (i % 5 == 0)
                write(1, "buzz", 4);
            else 
                ft_putnbr(i);
        }
        write(1, "\n", 1);
        i++;
    }
}