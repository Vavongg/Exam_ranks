/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:43:31 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/07 17:43:31 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_double(int *tab, char c)
{
	if (tab[(int)c] == 1)
	{
		tab[(int)c] = 0;
		ft_putchar(c);
	}
}

void	inter(char *str1, char *str2)
{
	int i;
	int seen[256];

	i = 0;
	while (i < 256)
	{
		seen[i] = 0;
		i++;
	}
	i = 0;
	while (str2[i])
	{
		seen[(int)str2[i]] = 1;
		i++;
	}
	i = 0;
	while (str1[i])
	{
		check_double(seen, str1[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
