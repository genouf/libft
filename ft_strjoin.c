/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:25:49 by genouf            #+#    #+#             */
/*   Updated: 2022/03/31 21:26:32 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*result;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = (char *)malloc(sizeof(char) * size);
	ft_strlcpy(result, s1, size);
	ft_strlcat(result, s2, size);
	return (result);
}

/*int	main(void)
{
	char	str1[] = "genouf";
	char	str2[] = "aselnet";
	char	*result;

	result = ft_strjoin(str1, str2);
	printf("%s", result);
	return (0);
}*/