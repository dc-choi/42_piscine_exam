/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:07:08 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/27 14:16:55 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int nbr_len(int nbr)
{
	int i = 1;

	if (nbr < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return i;
}

int ft_div(int len)
{
	int i = 1;

	if (len == 1)
		return 1;
	while (len > 1)
	{
		i *= 10;
		len--;
	}
	return i;
}

char *ft_itoa(int nbr)
{
	int i = 0;
	int len = nbr_len(nbr);
	int len2 = len;
	char *result = malloc(sizeof(char) * (len + 1));

	if (nbr == -2147483648)
		return "-2147483648\0";
	if (result == NULL)
		return 0;
	if (nbr < 0)
	{
		nbr *= -1;
		result[0] = '-';
		i++;
		len--;
	}
	while (i < len2)
	{
		result[i] = ((nbr / ft_div(len)) % 10) + '0';
		len--;
		i++;
	}
	result[i] = '\0';
	return result;
}
