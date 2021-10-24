/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:45:23 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/24 18:54:07 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int a;
	int b;
	int result;
	char op;

	result = 0;
	if (argc == 4)
	{
		a = atoi(argv[1]);
		op = argv[2][0];
		b = atoi(argv[3]);
		if (op == '+')
			result = a + b;
		else if (op == '-')
			reslut = a - b;
		else if (op == '*')
			result = a * b;
		else if (op == '/')
			result = a / b;
		else if (op == '%')
			result = a % b;
		printf("%d\n", result);
	}
	else
		write(1, "\n", 1);
	return 0;
}
