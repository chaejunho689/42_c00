#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int 	main(void)
{
	char dest[5] = "hello";
	char src[3] = "hi";
	ft_strcpy(dest, src);
	printf("%s", dest);
	return (0);
}
