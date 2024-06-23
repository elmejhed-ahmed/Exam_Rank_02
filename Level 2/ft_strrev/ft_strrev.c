/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:11:45 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/05/28 19:30:47 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char    *ft_strrev(char *str)
{
    int len = 0;
    char tmp;
    while(str[len])
        len++;
    int j = 0;
    while (j < (len / 2))
    {
        tmp = str[j];
        str[j] = str[len - 1 - j];
        str[len - 1 - j] = tmp;
        j++;
    }
    return str;
}

int main ()
{
	char tr[] = "koamrk";
    printf("%s", ft_strrev(tr));
}