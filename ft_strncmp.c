#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
		i++;
	if (s1[i] > s2[i])
		return (1);
	else if (s1[i] < s2[i])
		return (-1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d  ", strncmp("Gab", "Ga", 3));
	printf("%d", ft_strncmp("Gab", "Ga", 3));
}*/