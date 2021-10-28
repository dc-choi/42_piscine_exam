/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:39:13 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/28 18:49:57 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_double(char *str, char c, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return 1;
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			j = 0;
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					if (check_double(argv[1], argv[1][i], i))
					{
						write(1, &argv[1][i], 1);
						break;
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
