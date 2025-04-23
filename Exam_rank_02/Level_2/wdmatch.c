/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:18:12 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/07 18:18:12 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

void	ft_wd_match(char *first, char *second)
{
	int	i_first;
	int	i_second;

	i_first = 0;
	i_second = 0;
	while (second[i_second])
	{
		if (first[i_first] == second[i_second])
			i_first++;
		i_second++;
	}
	if (i_first == ft_strlen(first))
		ft_putstr(first);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_wd_match(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
