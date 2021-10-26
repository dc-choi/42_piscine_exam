/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:41:49 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/26 23:04:51 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_to_down(char a, char b)
{
	if (a >= 'A' && a <= 'Z')
	{
		if (b != ' ' && b != '\t' && b != '\0')
			return 1;
	}
	return 0;
}

int ft_to_up(char a, char b)
{
	if (a >= 'a' && a <= 'z')
	{
		if (b == ' ' || b == '\t' || b == '\0')
			return 1;
	}
	return 0;
}

int main(int argc, char **argv)
{
	int i = 0;
	int j;

	if (argc > 1)
	{
		while (++i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (ft_to_up(argv[i][j], argv[i][j + 1]))
					argv[i][j] -= 32;
				else if (ft_to_down(argv[i][j], argv[i][j + 1]))
					argv[i][j] += 32;
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}
