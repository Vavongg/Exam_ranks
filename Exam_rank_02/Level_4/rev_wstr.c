/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:23:47 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/14 19:23:47 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	int	next;

	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			if (av[1][i] == ' ')
			{
				next = i + 1;
				while (av[1][next] && av[1][next] != ' ')
				{
					write(1, &av[1][next], 1);
					next++;
				}
				write(1, " ", 1);
			}
			else if (i == 0)
			{
				next = i;
                while (av[1][next] && av[1][next] != ' ')
                {
                    write(1, &av[1][next], 1);
                    next++;
                }
			}
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}