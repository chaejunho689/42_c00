/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchae <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:15:00 by jchae             #+#    #+#             */
/*   Updated: 2021/03/07 21:23:41 by mkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

extern int	**g_board;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_error(void)
{
	ft_putstr("Error");
	ft_putchar('\n');
}

bool	ft_print_board(int length)
{
	int	i;
	int	j;

	i = 1;
	while (i < length + 1)
	{
		j = 1;
		while (j < length + 1)
		{
			ft_putchar('0' + g_board[i][j]);
			if (j != length)
			{
				ft_putchar(' ');
			}
			j += 1;
		}
		ft_putchar('\n');
		i += 1;
	}
	return (true);
}
