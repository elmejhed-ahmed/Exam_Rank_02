/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:36:44 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/06/24 17:09:49 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int res;
	int sin;
	int i;

	i = 0;
	res = 0;
	sin = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sin *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * sin);
}
void print_nbr(int nbr)
{
	unsigned int nb;

	nb = nbr;
	if (nb > 9)
	{
		print_nbr(nb / 10);
		print_nbr(nb % 10);
	}
	while (nb >= 0 && nb <= 9)
	{
		nb += 48;
		write(1, &nb, 1);
	}
}
int main(int ac, char **av)
{
	int nb1;
	int nb2;
	
	nb1 = 1;
	if (ac == 2)
	{
		nb2 = ft_atoi(av[1]);
		while(nb1 < 10)
		{
			print_nbr(nb1);
			write(1," x ", 3);
			print_nbr(nb2);
			write(1," = ", 3);
			print_nbr(nb1 * nb2);
			write(1, "\n", 1);
			nb1 ++;
		}
	}
	if (ac != 2)
		write(1, "\n", 1);
	return 0;
}