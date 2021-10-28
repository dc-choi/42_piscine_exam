/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:04:49 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/28 18:09:33 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list *sort_list(t_list list, int (*cmp)(int, int))
{
	int swap;
	t_list *temp;

	temp = list;
	while (list->next != 0)
	{
		if (((*cmp)(list->data, list->next->data)) == 0)
		{
			swap = list->data;
			list->data = list->next->data;
			list->next->data = swap;
			list = temp;
		}
		else
			list = list->next;
	}
	list = temp;
	return list;
}
