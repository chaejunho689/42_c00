/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkang <mkang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:02:29 by mkang             #+#    #+#             */
/*   Updated: 2021/03/07 23:06:12 by mkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECK_H
# define FT_CHECK_H

# include <stdbool.h>

extern int	**g_board;
extern bool	**g_visited_row;
extern bool	**g_visited_column;

bool		ft_check_column_down(int column, int length);
bool		ft_check_column_up(int column, int length);
bool		ft_check_row_left(int row, int length);
bool		ft_check_row_right(int row, int length);
bool		ft_check_column_all(int length);

#endif
