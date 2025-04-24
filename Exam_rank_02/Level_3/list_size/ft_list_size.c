/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:54:53 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/07 18:54:53 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list	*lst)
{
	int	size = 0;

	while(lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
