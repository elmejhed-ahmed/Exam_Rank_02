/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:31:37 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/06/20 14:07:17 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int sin;
    int sum;

    sin = 1;
    sum = 0;
    i = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sin *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        sum = sum * 10 + str[i] - 48;
        i++;
    }
    return (sum * sin);
}

int prime(int nb)
{
    int n;

    n = 2;
    while (n <= nb / 2)
    {
        if (nb % n == 0)
            return 0;
        n++;
    }
    return 1;
}
void printnbr(int nb)
{
    unsigned int n;

    n = nb;
    if (n > 9)
    {
        printnbr(n / 10);
        printnbr(n % 10);
    }
    while (n >= 0 && n <= 9)
    {
        n += 48;
        write(1, &n, 1);
    }
}
int main(int ac, char **av)
{
    int num;
    int sum;
    
    if (ac != 2)
        return (write(1, "0\n", 2), 0);
    num = ft_atoi(av[1]);
    if (num <= 0)
        return (write(1, "0\n", 2), 0);
    sum = 0;
    while (num > 1)
    {
        if (prime(num))
            sum += num;
        num--;
    }
    printnbr(sum);
    write(1, "\n", 1);
}