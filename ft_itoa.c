/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:52:56 by genouf            #+#    #+#             */
/*   Updated: 2022/04/01 10:52:58 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*reverse_str(char *str)
{
	char	tmp;
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(str);
	while (i < size / 2)
	{
		tmp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	tmp;
	int		i;

	i = 0;
	result = (char *)malloc(sizeof(char) * 12);
	tmp = n;
	if (tmp < 0)
		tmp = -tmp;
	while (tmp)
	{
		result[i] = tmp % 10 + 48;
		i++;
		tmp /= 10;
	}
	if (n < 0)
		result[i] = '-';
	result[++i] = '\0';
	return (reverse_str(result));
}

/*int	main(void)
{
	printf("%s", ft_itoa(2383440));
	return (0);
}*/