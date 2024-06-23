/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 17:47:28 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/06/21 18:09:47 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int *ar;
	int i;
	int len;
	
	len = 0;
	i = 0;
	if (start > end)
		len = start - end;
	else if (start < end)
		len = end - start;
	ar = (int *)malloc(sizeof(int) * len + 1);
	if (!ar)
		return 0;
	while (i < (len +1))
	{
		if (end > start)
		{
			ar[i] = end;
			end --;
		}
		else 
		{
			ar[i] = end;
			end ++;
		}
		i++;
	}
	return ar;
}
int main()
{
	int *r;
	int s = 1;
	int e = 1;
	int len = 0;
	if (s > e)
		len = s - e;
	else if (s < e)
		len = e - s;
	r = ft_rrange(s,e);
	for (int i = 0; i < (len + 1); i++)
		printf("%d\n", r[i]);
}