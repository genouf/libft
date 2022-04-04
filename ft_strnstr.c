/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:00:11 by genouf            #+#    #+#             */
/*   Updated: 2022/04/04 19:39:24 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		size;

	size = ft_strlen(needle);
	if (!(*needle))
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
			j++;
		if (j == size)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char haystack[30] = "aaabcabcd";
	
	printf("%s  \n", ft_strnstr(haystack, "cd", 8));
	printf("%s  \n", strnstr(haystack, "cd", 8));
}*/