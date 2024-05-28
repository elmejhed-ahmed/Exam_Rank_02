/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:44:26 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/05/28 17:51:04 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int len(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}
char    *ft_strdup(char *src)
{
    int i = 0;
    char *str;

    str = malloc(sizeof(char) * len(src));
    if (!str)
        return (NULL);
    while(src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return str;
}