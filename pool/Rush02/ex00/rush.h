/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 17:55:38 by hcharlsi          #+#    #+#             */
/*   Updated: 2021/02/06 17:55:43 by hcharlsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

typedef struct		s_st
{
	char			c;
	struct s_st		*next;
}					t_st;

typedef struct		s_str
{
	t_st			*name;
	t_st			*num;
	int				len;
	struct s_str	*next;
}					t_str;

#endif
