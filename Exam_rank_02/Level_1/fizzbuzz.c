/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:22:49 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/07 12:22:49 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	fizzbuzz(int start, int end)
{
	while (start <= end)
	{
		if (start % 3 == 0 && start % 5 == 0)
			ft_putstr("fizzbuzz");
		else if (start % 3 == 0)
			ft_putstr("fizz");
		else if (start % 5 == 0)
			ft_putstr("buzz");
		else
			ft_putnbr(start);
		ft_putchar('\n');
		start++;
	}
}

int	main()
{
	fizzbuzz(1, 100);
	return 0;
}
