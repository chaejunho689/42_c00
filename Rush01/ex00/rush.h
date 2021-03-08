/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkang <mkang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:07:10 by mkang             #+#    #+#             */
/*   Updated: 2021/03/07 23:09:45 by mkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <stdbool.h>

int		**g_board;
bool	**g_visited_row;
bool	**g_visited_column;
bool	g_possible;

void	ft_fill_visible_boxes(char **visible_boxes, int length);
void	ft_fill_blank(int row, int column, bool visit, int nbr);
void	ft_fill_board(int length, int row, int column);
void	rush(char *str);

#endif
