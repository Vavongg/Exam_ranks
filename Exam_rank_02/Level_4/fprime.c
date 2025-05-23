/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:17:36 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/14 19:17:36 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	nombre = atoi(av[1]);
		int	diviseur = 2;

		if (nombre <= 0)
		{
			printf("\n");
			return (0);
		}
		if (nombre == 1)
		{
			printf("1\n");
			return (0);
		}
		while (nombre != 1)
		{
			if (nombre % diviseur == 0)
			{
				printf("%d", diviseur);
				nombre /= diviseur;
				if (nombre != 1)
					printf("*");
			}
			else
				diviseur++;
		}
	}
	printf("\n");
	return (0);
}