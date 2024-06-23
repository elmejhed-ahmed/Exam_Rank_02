/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:19:49 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/06/21 19:32:11 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int nb;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		nb = a;
	else 
		nb = b;
	
	while (1)
	{
		if (nb % a == 0 && nb % b == 0)
			return nb;
		nb++;
	}
}
