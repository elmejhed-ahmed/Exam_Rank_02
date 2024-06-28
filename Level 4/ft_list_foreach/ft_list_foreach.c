/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:39:33 by ael-mejh          #+#    #+#             */
/*   Updated: 2024/06/28 18:05:16 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *node;

    node = begin_list;
    while (node != NULL)
    {
        f(node->data);
        node = node->next;
    }
}