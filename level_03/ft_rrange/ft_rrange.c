/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:26:52 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/26 20:29:59 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_abs(int x)
{
	if (x < 0)
		return -x;
	return x;
}

int *ft_rrange(int start, int end)
{
	int i = 0;
	int *tab = malloc(sizeof(int) * ft_abs(end - start) + 1);

	while (end > start)
	{
		tab[i] = end;
		end--;
		i++;
	}
	tab[i] = end;
	while (end< start)
	{
		tab[i] = end;
		end++;
		i++;
	}
	tab[i] = end;
	return tab;
}
