#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	void	*result;
	int		i;

	result = malloc(count);
	i = 0;
	while (i < count)
	{
		result[i] = malloc(size);
		i++;
	}
	if (result == NULL)
		return (NULL);
	ft_bzero(result, count * size);
	return (result);
}

int	main(void)
{
	return (0);
}