/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:22:11 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/14 19:22:11 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
        if (begin_list == NULL || *begin_list == NULL)
                return;

        t_list *current = *begin_list;
        t_list *previous = NULL;

        while (current)
        {
                if (cmp(current->data, data_ref) == 0)
                {
                        if (previous == NULL)
                        {
                            *begin_list = current->next;
                            free(current);
                            current = *begin_list;
                        }
                        else
                        {
                            previous->next = current->next;
                            free(current);
                            current = previous->next;
                        }
                }
                else
                {
                    previous = current;
                    current = current->next;
                }
        }
}
