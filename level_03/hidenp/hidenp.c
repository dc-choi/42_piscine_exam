/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:44:07 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/26 20:48:36 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int count = 0;

	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					count++;
					break;
				}
				j++;
			}
			i++;
		}
		if (argv[1][count] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return 0;
}
