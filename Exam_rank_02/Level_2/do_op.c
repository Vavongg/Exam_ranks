/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:29:05 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/07 14:29:05 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	do_op(char *nb1, char op, char *nb2)
{
	int first;
	int second;
	int result;

	result = 0;
	first = atoi(nb1);
	second = atoi(nb2);
	if (op == '+')
		result = first + second;
	else if (op == '-')
		result = first - second;
	else if (op == '*')
		result = first * second;
	else if (op == '/')
		result = first / second;
	else if (op == '%')
		result = first % second;
	printf("%d", result);
}

int main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2][0], av[3]);
	printf("\n");
	return 0;
}

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}