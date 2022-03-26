#include "libft.h"

size_t  ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t  i;

    i = 0;
    while (dst[i])
        i++;
    if (i >= dstsize)
        return (ft_strlen(src) + size);

}

int main(void)
{

}