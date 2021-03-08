#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int save;
	int small;

	i = 0;
	j = i + 1;

	while (tab[i] < tab[size] - 1)
	{
		while (tab[i] < tab[size])
		{
			if(tab[i] < tab[j])
			{
				save = tab[i];
				tab[i] = tab[j];
				tab[j] = save;
			}
		i++;
		}
	j++;
	}
	
}

int	main(void)
{
	int i;
	i = 5;
	int tab[5] = {8, 4, 1, 2, 5};

	ft_rev_int_tab(&tab[0], 5);
	for(int i = 0; i < 5; i++)
	{
		printf("%d", tab[i]);
	}
	return (0);
}
