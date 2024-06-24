/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:01:05 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/06/24 16:31:09 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int j;

	if (ac == 1)
		write(1, "\n", 1);
	if (ac > 1)
	{
		i = 1;
		while(av[i])
		{
			j = 0;
			while (av[i][j])
			{
				if(av[i][j] >= 'A' && av[i][j] <= 'Z')
					av[i][j] += 32;
				if (av[i][0] >= 'a' && av[i][0] <= 'z')
					av[i][j] -= 32;
				if (av[i][j - 1] == ' ' || (av[i][j - 1] >= 9 && av[i][j - 1] <= 13))
				{
					if (av[i][j] >= 'a' && av[i][j] <= 'z')
						av[i][j] -= 32;
				}
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}