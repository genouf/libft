/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:35:55 by genouf            #+#    #+#             */
/*   Updated: 2022/03/31 16:35:58 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s1c;
	char	*s2c;

	s1c = (char *)s1;
	s2c = (char *)s2;
	i = 0;
	while (s1c[i] == s2c[i] && s1c[i] && s2c[i] && i < n - 1)
		i++;
	if (s1c[i] > s2c[i])
		return (1);
	else if (s1c[i] < s2c[i])
		return (-1);
	else
		return (0);
}
