/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:57:28 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/07 11:57:28 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char *str)
{
	int i;

	i = 0;
	while (str[i] == 32 || str[i] == '\t')
		i++;
	while (str[i] && (str[i] != 32 && str[i] != '\t'))
	{
			ft_putchar(str[i]);
			i++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
		first_word(av[1]);
	write(1, "\n", 1);
	return 0;
}