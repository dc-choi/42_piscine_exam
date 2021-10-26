/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:07:21 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/26 18:14:04 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - 48;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			result += str[i] - 55;
		else if (str[i] >= 'a' && str[i] <= 'z')
			result += str[i] - 87;
		i++;
	}
	return result * sign;
}
