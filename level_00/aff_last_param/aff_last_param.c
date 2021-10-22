/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:10:21 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/22 19:15:35 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	if (argc > 1)
	{
		while (argv[argc - 1][i] != '\0')
		{
			write(1, &argv[argc - 1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
