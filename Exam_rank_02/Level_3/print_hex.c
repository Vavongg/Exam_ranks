/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:07:36 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/14 19:07:36 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	result = 0;

	while (str[i])
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_hexa(int n)
{
	char	tab[] = "0123456789abcdef";

	if (n >= 16)
	{
		put_hexa(n / 16);
		put_hexa(n % 16);
	}
	else
		ft_putchar(tab[n]);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_atoi(av[1]) >= 0)
		{
			put_hexa(ft_atoi(av[1]));
		}
	}
	write(1, "\n", 1);
	return (0);
}
