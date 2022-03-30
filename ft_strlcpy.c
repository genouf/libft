#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while (i + 1 < dstsize && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*int	main(void)
{
	char	str[3];
	char	str1[3];

	printf("%lu  ", strlcpy(str, "Gabriel", 3));
	printf("%s", str);
	printf("%lu", ft_strlcpy(str1, "Gabriel", 3));
	printf("%s", str1);
}*/