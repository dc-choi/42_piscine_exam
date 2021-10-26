/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:05:10 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/26 21:08:47 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void pgcd(int a, int b)
{
	int i = 1;
	int gcd = 0;

	while (i < a && i < b)
	{
		if (a % i == 0 && b % i == 0)
			gcd = i;
		i++;
	}
	printf("%d", gcd);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return 0;
}
