/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkang <mkang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:43:03 by mkang             #+#    #+#             */
/*   Updated: 2021/03/07 22:54:15 by mkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPLIT_H
# define FT_SPLIT_H

# include <stdbool.h>

void	ft_strncpy(char *dest, char *set, int size);
bool	ft_is_in_charset(char c, char *charset);
int		ft_count_words(char *str);
char	**ft_split(char *str);

#endif
