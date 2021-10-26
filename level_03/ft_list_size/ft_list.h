/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:01:15 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/26 20:06:07 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_SIZE_H
#define FT_LIST_SIZE_H

typedef struct s_list
{
	struct s_list *next;
	void *data;
} t_list;

int ft_list_size(t_list *begin_list);

#endif
