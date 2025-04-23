/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:18:08 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/14 19:18:08 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	char	*str = malloc(sizeof(char) * 4096);
	long	nb = nbr;
	int		i = 4095;

	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (nb == 0)
	{
		str[i] = '0';
		return (&str[i]);
	}
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		str[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	if (nbr < 0)
		str[i--] = '-';
	return (&str[i + 1]);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	n = atoi(argv[1]);
		char *result = ft_itoa(n);
		printf("Résultat de ft_itoa(%d) : %s\n", n, result);
	}
	else
	{
		printf("Usage: %s <number>\n", argv[0]);
	}
	return (0);
}



