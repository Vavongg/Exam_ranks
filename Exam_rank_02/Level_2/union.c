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

void	check_ascii_tab(int *ascii_tab, char c_str_2)
{
	if (ascii_tab[(int)c_str_2] == 0)
	{
		ft_putchar(c_str_2);
		ascii_tab[(int)c_str_2] = 1;
	}
}

void	ft_union(char *str_1, char *str_2)
{
	int	idx;
	int	ascii_tab[256];

	idx = 0;
	while (idx <= 256)
	{
		ascii_tab[idx] = 0;
		idx++;
	}
	idx = 0;
	while (str_1[idx])
	{
		check_ascii_tab(ascii_tab, str_1[idx]);
		idx++;
	}
	idx = 0;
	while (str_2[idx])
	{
		check_ascii_tab(ascii_tab, str_2[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}