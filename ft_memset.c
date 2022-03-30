#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p = b;

	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}

/*int	main(void)
{
	char	str[10] = "Gabriel";

	ft_memset(str, 71, 3);
	printf("%s", str);
}*/