/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:15:10 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/07 13:15:10 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot13(char *str, int rot)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ('A' + ((str[i] - 'A') + rot) % 26);
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ('a' + ((str[i] - 'a') + rot) % 26);
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rot13(av[1], 13);
	write(1, &"\n", 1);
	return 0;
}