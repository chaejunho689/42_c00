/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchae <jchae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 23:17:45 by jchae             #+#    #+#             */
/*   Updated: 2021/02/24 23:17:48 by jchae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int a, int b)
{
	char one;
	char two;
	char three;
	char four;

	ft_putchar(one = '0' + a / 10);
	ft_putchar(two = '0' + a % 10);
	ft_putchar(' ');
	ft_putchar(three = '0' + b / 10);
	ft_putchar(four = '0' + b % 10);
	if (!(a == 98 && b == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_display(a, b);
			b++;
		}
		a++;
	}
}

int main(void)
{
    ft_print_comb2();
    return 0;
}
