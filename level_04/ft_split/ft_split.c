/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:10:05 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/28 14:30:23 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define WD_NUM 1000

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **tab = malloc(sizeof(char) * WD_NUM);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] > 32)
		{
			k = 0;
			tab[j] = malloc(sizeof(char) * WD_NUM);
			while (str[i] > 32)
			{
				tab[j][k] = str[i];
				i++;
				k++;
			}
		}
		else
			i++;
	}
	tab[j] = 0;
	return tab;
}
