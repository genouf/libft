/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:59:10 by genouf            #+#    #+#             */
/*   Updated: 2022/03/31 16:21:01 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*copy;

	copy = (unsigned char *)s;
	while (n > 0)
	{
		if (*copy == c)
			return (copy);
		copy++;
		n--;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "Guillaume";
	char	*result;
	
	result = ft_memchr(str, 'i', 9);
	printf("%s", result);
	return (0);
}*/