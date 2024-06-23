/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 16:31:39 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/06/21 17:45:42 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int *ar;
	int i;
	int len;

	i = 0;
	len = 0;
	if (start > end)
		len = start - end;
	else if (start < end)
		len = end - start;
	ar =(int *)malloc(sizeof(int) * len + 1);
	if (!ar)
		return 0;
	while (i < (len + 1))
	{
		if (start < end)
		{
			ar[i] = start;
			start ++;
		}
		else 
		{
			ar[i] = start;
			start --;
		}
		i++;
	}
	return ar;
}
int main()
{
	int *r;
	int s = 0;
	int e = 0;
	int len = 0;
	if (s > e)
		len = s - e;
	else if (s < e)
		len = e - s;
	r = ft_range(s,e);
	for (int i = 0; i < (len + 1); i++)
		printf("%d\n", r[i]);
}