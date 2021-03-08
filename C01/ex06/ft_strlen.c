#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	int i;
	i = 0;

	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char str[] = "hi hello";
	int i;

	putstr(&str[i]);

	return (0);
}
