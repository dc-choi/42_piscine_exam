/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:16:50 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/26 17:34:05 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *src)
{
	int i = 0;

	while (src[i] != '\0')
		i++;
	return i;
}

char *ft_strdup(char *src)
{
	int i = 0;
	int len = ft_strlen(src);
	char *copy;

	if (!(copy = malloc(sizeof(char) * len + 1)) == NULL)
		return NULL;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return copy;
}
