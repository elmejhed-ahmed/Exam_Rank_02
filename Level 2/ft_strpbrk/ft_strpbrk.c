/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:53:51 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/05/28 18:05:08 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    while(s1)
    {
        int j = 0;
        while(s2[j])
        {
            if(*s1 == s2[j])
                return ((char *) s1);
            j++;
        }
        s1++;
    }
    return NULL;
}
