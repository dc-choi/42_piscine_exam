/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:17:05 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/26 18:29:35 by donchoi          ###   ########.fr       */
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
		ft_putchar(nbr % 10 + '0');
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

int ft_is_prime(int nbr)
{
	int i = 2;

	while (i < nbr)
	{
		if (nbr % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int ft_add_prime_sum(int nbr)
{
	int i = 2;
	int prime_sum = 0;

	if (nbr <= 0)
		return 0;
	while (i <= nbr)
	{
		if (ft_is_prime(i))
			prime_sum += i;
		i++;
	}
	return prime_sum;
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_putnbr(ft_add_prime_sum(ft_atoi(argv[1])));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return 0;
}
