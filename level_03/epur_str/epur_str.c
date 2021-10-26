/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:45:29 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/26 18:50:40 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				if (argv[1][i + 1] > 32 && argv[1][i + 1] != '\0')
					write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] != ' ' && argv[1][i] != '\t')
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
