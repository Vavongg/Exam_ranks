/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_snake.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:23:00 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/07 14:23:00 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	camel_snake(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			ft_putchar('_');
			str[i] += 32;
		}
		ft_putchar(str[i])
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		camel_snake(av[1]);
	ft_putchar('\n');
	return 0;
}
