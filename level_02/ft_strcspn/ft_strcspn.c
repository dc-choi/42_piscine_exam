/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:10:32 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/28 18:46:52 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return i;
			j++;
		}
		i++;
	}
	i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}
