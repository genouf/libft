#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return(c);
}

/*int main(void)
{
    int i;
    char str[] = "alexis";

    i = 0;
    while (str[i])
    {
        str[i] = toupper(str[i]);
        i++;
    }
    printf("%s", str);
}*/