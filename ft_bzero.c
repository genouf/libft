#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}

/*int	main(void)
{
	char	str[] = "Gab";

	ft_bzero(str, 1);
	printf("%s", str);
}*/