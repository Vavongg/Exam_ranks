/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:03:04 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/07 14:03:04 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	search_replace(char *str, char a, char b)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == a)
			ft_putchar(b);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 4)
		search_replace(av[1], av[2][0], av[3][0]);
	return 0;
}
