/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:11:35 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/26 21:26:38 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
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

void print_hex(int nbr)
{
	if (nbr >= 16)
	{
		print_hex(nbr / 16);
		print_hex(nbr % 16);
	}
	if (nbr < 10)
		ft_putchar(nbr + 48);
	else if (nbr < 16)
		ft_putchar(nbr + 87);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return 0;
}
