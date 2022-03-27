#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "Emmanuel";

	printf("%s", ft_strchr(str, 'a'));
}*/
