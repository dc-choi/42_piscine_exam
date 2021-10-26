/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:11:43 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/26 20:25:08 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_abs(int x)
{
	if (x < 0)
		return -x;
	return x;
}

int *ft_range(int start, int end)
{
	int i = 0;
	int *tab = malloc(sizeof(int) * ft_abs(start - end) + 1);

	while (start < end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	tab[i] = start;
	while (start > end)
	{
		tab[i] = start;
		start--;
		i++;
	}
	tab[i] = start;
	return tab;
}
