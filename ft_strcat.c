#include "libft.h"

char *ft_strcat(char *restrict s1, const char *restrict s2)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (s1[i])
        i++;
    while (s2[j])
    {
        s1[i + j] = s2[j];
        j++;
    }
    s1[i + j] = '\0';
    return(s1);
}

int main(void)
{
    char    str[100] = "Gab";

    printf("%s 1", strcat(str, "ri"));
    printf("%s 2", ft_strcat(str, "ri"));

    return(0);
}

