/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:50:29 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/14 18:50:29 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	result = 0;

	while (str[i])
	{
		result *= 10
		result += str[i] - '0';
		i++;
	}
	return (result);
}

int	is_prime(int nombre)
{
	int	diviseur = 2;

	if (nombre <= 1)
		return (0);
	while (diviseur * diviseur <= nombre)
	{
		if (nombre % diviseur == 0)
			return (0);
		else
			diviseur++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	main(int ac, char **av)
{
	int	somme_des_premiers = 0;
	int	nombre_actuel = 2;

	if (ac == 2)
	{
		while (nombre_actuel <= ft_atoi(av[1]))
		{
			if (is_prime(nombre_actuel))
				somme_des_premiers += nombre_actuel;
			nombre_actuel++;
		}
	}
	ft_putnbr(somme_des_premiers);
	write(1, "\n", 1);
	return (0);
}
