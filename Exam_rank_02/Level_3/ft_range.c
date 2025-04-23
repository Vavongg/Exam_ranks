/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:58:37 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/14 18:58:37 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
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
			tab[i] = start++;
		else
			tab[i] = start--;
		i++;
	}
	return (tab);
}



