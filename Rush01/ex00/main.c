/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkang <mkang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 18:28:26 by mkang             #+#    #+#             */
/*   Updated: 2021/03/07 23:10:20 by mkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_print.h"
#include "rush.h"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		ft_print_error();
		return (0);
	}
	rush(argv[1]);
	return (0);
}
