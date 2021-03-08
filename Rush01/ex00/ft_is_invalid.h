/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_invalid.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkang <mkang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:57:11 by mkang             #+#    #+#             */
/*   Updated: 2021/03/07 23:01:28 by mkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IS_INVALID_H
# define FT_IS_INVALID_H

# include <stdbool.h>

int		ft_strlen(char *str);
bool	ft_is_invalid_length(int length);
bool	ft_is_invalid(char **words, int length);

#endif
