/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 00:34:03 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/27 00:43:49 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;

	while (str[i] != '\0')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return result;
}

int main(int argc, char **argv)
{
	int nbr;

	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		for (int i = 1; i < 10; i++)
		{
			ft_putnbr(i);
			write(1, " X ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(nbr * i);
			if (i != 9)
				write(1, "\n", 1);
		}
	}
	write(1, "\n", 1);
	return 0;
}
