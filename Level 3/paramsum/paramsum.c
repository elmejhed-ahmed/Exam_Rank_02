/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:32:58 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/06/21 19:42:41 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void printnbr(unsigned int nb)
{
	if (nb > 9)
	{
		printnbr(nb / 10);
		printnbr(nb % 10);
	}
	while (nb >= 0 && nb <= 9)
	{
		nb += 48;
		write(1, &nb, 1);
	}
}
int main(int ac, char **av)
{
	(void)av;
	
		printnbr(ac - 1);
	
	write(1, "\n", 1);
	return 0;
}
