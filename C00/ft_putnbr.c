#include <stdio.h>
#include <unistd.h>

void	ft_putnbr (int nb)
{
	scanf("%d", &nb);
	char ab[nb];
	write(1, &nb, 2);
}

int		main(void)
{
	int nb;
	ft_putnbr (nb);
	return 0;
}
