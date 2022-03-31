/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:47:26 by genouf            #+#    #+#             */
/*   Updated: 2022/03/31 21:48:16 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * len + 1);
	ft_strlcpy(result, s += start, len + 1);
	return (result);
}

/*int	main(void)
{
	char	str[]= "gkheren";
	char	*result;

	result = ft_substr(str, 1, 6);
	printf("%s", result);
}*/