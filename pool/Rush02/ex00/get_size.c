/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:56:57 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/06 18:57:00 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	get_size(t_st *begin_list)
{
	int quantity;

	quantity = 0;
	while (begin_list)
	{
		quantity++;
		begin_list = begin_list->next;
	}
	return (quantity);
}
