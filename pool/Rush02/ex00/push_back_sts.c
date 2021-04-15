/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back_sts.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:12:54 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/06 18:12:56 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

t_st	*create_elem_sts(char data);

void	push_back_sts(t_st *begin_list, char c)
{
	t_st	*new_el;
	t_st	*temp;

	new_el = ft_create_elem(c);
	temp = begin_list;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_el;
		new_el->next = 0;
	}
	else
	{
		new_el->next = 0;
		begin_list = new_el;
	}
}
