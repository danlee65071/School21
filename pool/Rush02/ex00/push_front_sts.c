/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_front_sts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:17:54 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/06 18:17:56 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

t_st	*create_elem_sts(char data);

void	push_front_sts(t_st *begin_list, char data)
{
	t_st	*tmp;

	tmp = ft_create_elem(data);
	tmp->next = begin_list;
	begin_list = tmp;
}
