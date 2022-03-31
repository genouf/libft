#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*c;
	unsigned char	*p;

	c = (unsigned char *)src;
	p = (unsigned char *)dst;
	while (n > 0)
	{
		*p = *c;
		p++;
		c++;
		n--;
	}
	return (dst);
}

/*int	main(void)
{
	char	str[] = "Alexandre";

	//ft_memcpy(str + 1, str, 4);
	//memcpy(str + 1, str, 4);
	printf("%s", str);
}*/