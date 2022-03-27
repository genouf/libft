#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	size_t	size;

	size = ft_strlen(needle);
	if (!(*needle))
		return ((char *)haystack);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j])
			j++;
		if (j == size)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	printf("%s", ft_strstr("Gabriel", "ri"));
}*/