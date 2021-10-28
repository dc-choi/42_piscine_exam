/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:01:33 by donchoi           #+#    #+#             */
/*   Updated: 2021/10/28 23:54:16 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef
#define

typedef struct s_list
{
	struct s_list *next;
	void *data;
}	t_list;

#endif
