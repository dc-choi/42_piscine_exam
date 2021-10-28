/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:59:03 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/28 15:42:47 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **tab = malloc(sizeof(char) * 100);
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			k = 0;
			tab[j] = malloc(sizeof(char) * 100);
			while (str[i] != ' ' && str[i] != '\t' && str[i])
			{
				tab[j][k] = str[i];
				i++;
				k++;
			}
			tab[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	tab[j] = 0;
	return tab;
}

int main(int argc, char **argv)
{
	int i = 1;
	char **words;

	if (argc > 1)
	{
		words = ft_split(argv[1]);
		while (words[i])
		{
			ft_putstr(words[i]);
			write(1, " ", 1);
			i++;
		}
		ft_putstr(words[0]);
	}
	write(1, "\n", 1);
	return 0;
}
