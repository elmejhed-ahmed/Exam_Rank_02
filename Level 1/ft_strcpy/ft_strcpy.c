/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:21:25 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/04/23 13:32:59 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while(s1[i])
    {
        i++;
    }
    i -= 1;
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}
int main()
{
    printf("%s\n", strcpy(NULL, "hello"));
    // printf("%s", ft_strcpy("", "hello"));
}