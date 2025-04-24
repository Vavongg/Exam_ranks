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

int	*ft_rrange(int start, int end)
{
	int	i = 0;
	int	size;
	int	*tab;

	if (start > end)
		size = start - end + 1;
	else
		size = end - start + 1;
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	while (i < size)
	{
		if (start <= end)
			tab[i] = end--;
		else
			tab[i] = end++;
		i++;
	}
	return (tab);
}
