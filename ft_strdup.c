#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*copy;

	size = ft_strlen(s1) + 1;
	copy = (char *)malloc(sizeof(char) * size);
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, s1, size);
	return (copy);
}

int	main(void)
{
	char	str[] = "Alexandre";

	printf("%s \n", strdup(str));
	printf("%s", ft_strdup(str));
}