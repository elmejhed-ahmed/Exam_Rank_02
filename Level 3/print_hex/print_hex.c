/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:00:33 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/06/24 14:44:30 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int i;
	int sin;
	int res;

	i = 0;
	sin = 1;
	res = 0;
	while (str[i] == ' ' && (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sin *= -1;
		i++;
	}
	while (str[i] >= '0' || str[i] == '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (sin * res);
}
void print_hex(int nb)
{
	char nbr;

	nbr = '\0';
	if (nb >= 16)
	{
		print_hex(nb / 16);
		print_hex(nb % 16);
	}
	else
	{
		if (nb >= 0 && nb <= 9)
			nbr = nb + 48;
		else if (nb >= 10 && nb <= 15)
			nbr = nb + 'a' - 10;
		write(1, &nbr, 1);
	}
}
int main(int ac, char **av)
{
	int nb;

	if (ac == 1)
	{
		nb = ft_atoi(av[1]);
		print_hex(nb);
	}
	write(1, "\n", 1);
	return 0;
}