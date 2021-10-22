/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 23:27:17 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/22 23:37:08 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int count = 0;
	while (*(str + count) != '\0')
		count++;
	return count;
}

int main(int argc, char **argv)
{
	int length = 0;
	if (argc == 2)
	{
		length = ft_strlen(argv[1]);
		while (length > 0)
		{
			ft_putchar(argv[1][length - 1]);
			length--;
		}
	}
	ft_putchar('\n');
}
