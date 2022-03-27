#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i])
		i++;
	if (i >= dstsize)
		return ((size_t)ft_strlen(src) + dstsize);
	j = 0;
	while (src[j] && (i + j + 1 < dstsize))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return ((size_t)ft_strlen(src) + i);
}
