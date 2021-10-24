/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:39:46 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/24 21:45:31 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char *str;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] <= ' ' && argv[1][i + 1] > 32)
				str = &argv[1][i + 1];
			i++;
		}
		i = 0;
		while (str && str[i] > 32)
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
