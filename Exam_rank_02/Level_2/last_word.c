/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:05:46 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/14 15:05:46 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
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
void last_word(char *str)
{
	int len;
	int start;

	len = ft_strlen(str) - 1;

	while (len >= 0 && (str[len] == 32 || str[len] == '\t'))
		len--;
	start = len;
	while (start >= 0 && (str[start] != 32 && str[start] != '\t'))
		start--;
	start++;
	while (start <= len)
	{
		ft_putchar(str[start]);
		start++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	ft_putchar('\n');
	return (0);
}