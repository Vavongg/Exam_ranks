/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:09:48 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/07 13:09:48 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	rev_print(char *str)
{

	int len;

	len = ft_strlen(str);
	while (len--)
	{
		ft_putchar(str[len]);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rev_print(av[1]);
	ft_putchar('\n');
	return 0;
}