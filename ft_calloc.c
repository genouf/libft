/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:58:05 by genouf            #+#    #+#             */
/*   Updated: 2022/03/31 15:58:07 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	void	*result;
	int		i;

	result = malloc(count);
	i = 0;
	while (i < count)
	{
		result[i] = malloc(size);
		i++;
	}
	if (result == NULL)
		return (NULL);
	ft_bzero(result, count * size);
	return (result);
}

int	main(void)
{
	return (0);
}