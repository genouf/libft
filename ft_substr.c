/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:47:26 by genouf            #+#    #+#             */
/*   Updated: 2022/04/04 23:13:46 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	size;

	size = ft_strlen(s);
	if (len > size)
		len = size;
	if (!(*s))
		return (NULL);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	if (start > size)
		result[0] = 0;
	else
		ft_strlcpy(result, s += start, len + 1);
	return (result);
}

/*int	main(void)
{
	char	*result;

	result = ft_substr("tripouille", 9, 100);
	printf("%s\n", result);
}*/