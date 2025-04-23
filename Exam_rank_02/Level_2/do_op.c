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

	first = atoi(nb1);
	second = atoi(nb2);
	result = 0;
	if (op == '-')
		result = first - second;
	else if (op == '+')
		result = first + second;
	else if (op == '*')
		result = first * second;
	else if (op == '%')
		result = first % second;
	else if (op == '/')
		result = first / second;
	printf("%d", result);
}

int main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2][0], av[3]);
	printf("\n");
	return 0;
}
