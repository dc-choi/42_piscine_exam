/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:26:22 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/24 19:37:03 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return i;
}

char *ft_strrev(char *str)
{
	int i = 0;
	int len = ft_strlen(str) - 1;
	char temp;

	while (len > i)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return str;
}
