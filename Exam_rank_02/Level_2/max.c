/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:50:35 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/07 17:50:35 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int max;

	if (len <= 0 || tab == NULL)
		return 0;
	len--;
	max = tab[len];
	while (len)
	{
		if (tab[len] > max)
			max = tab[len];
		len--;
	}
	return (max);
}
