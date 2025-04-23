/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:16:06 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/07 18:16:06 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_doublon(int *tab, char str)
{
	if (tab[(int)str] == 0)
	{
		ft_putchar(str);
		tab[(int)str] = 1;
	}
}

void	ft_union(char *str_1, char *str_2)
{
	int	i;
	int	seen[256];

	i = 0;
	while (i <= 256)
	{
		seen[i] = 0;
		i++;
	}
	i = 0;
	while (str_1[i])
	{
		check_doublon(seen, str_1[i]);
		i++;
	}
	i = 0;
	while (str_2[i])
	{
		check_doublon(seen, str_2[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
