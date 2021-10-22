/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 23:52:35 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/23 00:00:36 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char temp;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				|| (argv[1][i] >= 'a' && argv[1][i] <= 'y'))
			{
				temp = argv[1][i] + 1;
				write(1, &temp, 1);
			}
			else if (argv[1][i] == 'Z')
				write(1, "A", 1);
			else if (argv[1][i] == 'z')
				write(1, "a", 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
