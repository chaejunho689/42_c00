/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchae <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 00:38:27 by jchae             #+#    #+#             */
/*   Updated: 2021/03/07 00:38:48 by jchae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char 	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	return (dest);
}

int	main(void)
{
	char dest[7] = "Hello";
	char src[4] = "hi";
	ft_strncpy(dest, src);
	printf("%s", dest);
	return 0;
}
