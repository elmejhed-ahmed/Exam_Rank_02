/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:33:21 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/05/28 20:00:12 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *check(const char *ac, int c)
{
    while(*ac)
    {
        if(*ac == c)
            return (char *)ac;
        ac++;   
    }
    return 0;
}
size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    while(s[i])
    {
        if (check(accept, s[i]) == 0)
            break;
        i++;
    }
    return i;
}