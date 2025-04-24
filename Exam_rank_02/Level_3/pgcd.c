/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:06:55 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/14 19:06:55 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int	pgcd(unsigned int a, unsigned int b)
{
	unsigned int	temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		unsigned int	result = pgcd(atoi(av[1]), atoi(av[2]));
		printf("%d", result);
	}
	printf("\n");
	return (0);
}
