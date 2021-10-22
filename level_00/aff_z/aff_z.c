/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:21:21 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/22 19:27:40 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	if (argc > 1)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'z')
			{
				write(1, "z\n", 2);
				return 0;
			}
			i++;
		}
		write(1, "z\n", 2);
		return 0;
	}
	write(1, "z\n", 2);
	return 0;
}
