/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkang <mkang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:38:14 by mkang             #+#    #+#             */
/*   Updated: 2021/03/07 22:55:52 by mkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <stdbool.h>

extern int	**g_board;

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_print_error(void);
bool		ft_print_board(int lenghth);

#endif
