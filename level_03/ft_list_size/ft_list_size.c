/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:59:13 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/26 20:05:26 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int i = 0;
	t_list *list = begin_list;

	while (list)
	{
		list = list->next;
		i++;
	}
	return i;
}
