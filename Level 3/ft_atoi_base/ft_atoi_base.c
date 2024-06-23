/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:07:08 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/06/21 13:57:21 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	int sin;
	int res;
	int num;

	i = 0;
	sin = 1;
	res = 0;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sin *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || ( str[i] >= 'A' && str[i] <= 'F'))
	{
		if (str[i] >= '0' && str[i] <= '9')
			num = str[i] - 48;
		else if (str[i] >= 'a' && str[i] <= 'f')
			num = (str[i] - 97) + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			num = (str[i] - 65) + 10;
		if (num >= str_base)
			break;
		res = res * str_base + num;
		i++;
	}
	return (res * sin);
}