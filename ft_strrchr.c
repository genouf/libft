#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i > -1)
	{
		if (s[i] == c)
		{
			s += i;
			return ((char *)s);
		}
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "Emmanuael";

	printf("%s", ft_strrchr(str, 'a'));
}*/
