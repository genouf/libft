/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 08:56:03 by genouf            #+#    #+#             */
/*   Updated: 2022/04/01 08:57:21 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	trim_that(char *str, char const *set, size_t size)
{
	char	*result;
	size_t	size_set;

	size_set = ft_strlen(set);
	result = ft_strnstr(str, set, size_set);
	if (result != NULL)
		ft_memmove(str, result += size_set, size - size_set);
	str += size - size_set - 3;
	result = ft_strnstr(str, set, size_set);
	if (result != NULL)
		*str = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	size;

	size = ft_strlen(s1) + 1;
	result = (char *)malloc(sizeof(char) * size);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, size);
	trim_that(result, set, size);
	return (result);
}

/*int	main(void)
{
	char	str[] = "AelexandreAe";
	char	*result;

	result = ft_strtrim(str, "Ae");
	printf("%s", result);
}*/