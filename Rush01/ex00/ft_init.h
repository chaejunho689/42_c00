/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkang <mkang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:53:12 by mkang             #+#    #+#             */
/*   Updated: 2021/03/07 22:53:13 by mkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INIT_H
# define FT_INIT_H

extern int	**g_board;
extern bool	**g_visited_row;
extern bool	**g_visited_column;

void		ft_init_board(int length);
void		ft_init_visited(int length);
void		ft_init(int length);

#endif
