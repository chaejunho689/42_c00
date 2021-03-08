/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkang <mkang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 18:27:34 by mkang             #+#    #+#             */
/*   Updated: 2021/03/07 23:05:37 by mkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>
#include "ft_init.h"
#include "ft_is_invalid.h"
#include "ft_print.h"
#include "ft_split.h"
#include "ft_check.h"

int		**g_board;
bool	**g_visited_row;
bool	**g_visited_column;
bool	g_possible;

void	ft_fill_visible_boxes(char **visible_boxes, int length)
{
	int	i;

	i = 0;
	while (i < length)
	{
		g_board[0][i + 1] = *visible_boxes[i] - '0';
		g_board[length + 1][i + 1] = *visible_boxes[length + i] - '0';
		g_board[i + 1][0] = *visible_boxes[length * 2 + i] - '0';
		g_board[i + 1][length + 1] = *visible_boxes[length * 3 + i] - '0';
		i += 1;
	}
}

void	ft_fill_blank(int row, int column, bool visit, int nbr)
{
	g_visited_row[row][nbr] = visit;
	g_visited_column[column][nbr] = visit;
	g_board[row][column] = nbr;
}

void	ft_fill_board(int length, int row, int column)
{
	int	i;

	if (g_possible)
		return ;
	if (column == length + 1)
	{
		if (ft_check_row_left(row, length) && ft_check_row_right(row, length))
			ft_fill_board(length, row + 1, 1);
		return ;
	}
	if (row == length + 1)
	{
		if (ft_check_column_all(length))
			g_possible = ft_print_board(length);
		return ;
	}
	i = 0;
	while (i++ < length)
		if (!g_visited_row[row][i] && !g_visited_column[column][i])
		{
			ft_fill_blank(row, column, true, i);
			ft_fill_board(length, row, column + 1);
			ft_fill_blank(row, column, false, i);
		}
}

void	rush(char *str)
{
	char	**visible_boxes;
	int		length;

	visible_boxes = ft_split(str);
	length = ft_count_words(str) / 4;
	if (ft_count_words(str) % 4 != 0 || ft_is_invalid(visible_boxes, length))
	{
		ft_print_error();
		return ;
	}
	ft_init(length);
	ft_fill_visible_boxes(visible_boxes, length);
	ft_fill_board(length, 1, 1);
	if (g_possible == false)
		ft_print_error();
}
