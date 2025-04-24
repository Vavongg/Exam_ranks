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

void	rev_wstr(char *str)
{
	int	i = 0;
	int	next;

	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		if (str[i] == ' ' || i == 0)
		{
			if (i == 0)
				next = i;
			else
				next = i + 1;
			while (str[next] && str[next] != ' ')
			{
				write(1, &str[next], 1);
				next++;
			}
			if (i != 0)
				write(1, " ", 1);
		}
		i--;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
	return (0);
}

