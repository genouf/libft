/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:59:43 by genouf            #+#    #+#             */
/*   Updated: 2022/03/31 15:59:45 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i])
		i++;
	if (i > dstsize)
		return (ft_strlen(src) + dstsize);
	j = 0;
	while (src[j] && (i + j + 1 < dstsize))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (ft_strlen(src) + i);
}

/*int	main(void)
{
	char	str[11] = "lolmdrllll";
	char	str1[11] = "lolmdrllll";

	printf("%lu // ", strlcat(str, "Bonjour", 10));
	printf("%s", str);
	printf("\n%lu // ", ft_strlcat(str1, "Bonjour", 10));
	printf("%s", str1);
}*/
