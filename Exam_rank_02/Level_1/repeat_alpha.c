/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:55:24 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/07 12:55:24 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>

void	repeat_alpha(char *str)
{
	int i;
	int alpha_i;

	i = 0;
	alpha_i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			alpha_i = str[i] - 'A';
			while (alpha_i-- >= 0)
				write(1, &str[i], 1);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			alpha_i = str[i] - 'a';
			while (alpha_i-- >= 0)
				write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, &"\n", 1);
	return (0);
}