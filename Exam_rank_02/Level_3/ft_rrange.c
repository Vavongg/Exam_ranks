/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:59:40 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/14 18:59:40 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	i = 0;
	int	size_tab;
	int	*tab;

	if (start > end)
		size_tab = start - end + 1;
	else
		size_tab = end - start + 1;
	tab = malloc(sizeof(int) * size_tab);
	if (!tab)
		return (NULL);
	while (i < size_tab)
	{
		if (start <= end)
			tab[i] = end--;
		else
			tab[i] = end++;
		i++;
	}
	return (tab);
}