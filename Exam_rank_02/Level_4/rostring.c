/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:24:47 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/14 19:24:47 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rostring(char *str)
{
	int	i = 0;
	int	start = 0;
	int	end = 0;
	int	space = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;

	start = i;

	while (str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	end = i;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i] && space)
			write(1, " ", 1);
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			write(1, &str[i], 1);
			i++;
			space = 1;
		}
	}
	if (space)
		write(1, " ", 1);
	while (start < end)
		write(1, &str[start++], 1);
}

int	main(int ac, char **av)
{
	if (ac > 1 && av[1][0])
		rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}
