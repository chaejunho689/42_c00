#include <unistd.h>
#include <stdio.h>

void ft_is_negative(int n)
{
	scanf("%d", &n);
	if ( n >= 0)
	write(1, "P", 1);

	else
	write(1, "N", 1);
}

int main(void)
{
	char n;
	ft_is_negative(n);
	return 0;
}
