/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:58:16 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/06/21 15:58:03 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    puts("hhh");
    int i = 0;
    if (!begin_list)
        return 0;
    while (begin_list)
    {
        begin_list = begin_list->next;
        i++;
    }
    return i;
}