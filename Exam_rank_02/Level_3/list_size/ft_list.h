/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:52:01 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/07 18:52:01 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST
# define FT_LIST

# include <stddef.h> 

typedef struct	s_list
{
	struct	s_list *next;
	void			*data;
}	t_list;

#endif
