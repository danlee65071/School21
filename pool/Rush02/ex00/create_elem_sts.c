/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_elem_sts.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:12:15 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/06 18:12:17 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush.h"

t_st	*create_elem_sts(char data)
{
	t_st	*res;

	res = malloc(sizeof(t_st));
	res->c = data;
	res->next = NULL;
	return (res);
}
