/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:12:19 by genouf            #+#    #+#             */
/*   Updated: 2022/04/01 15:23:49 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (s[++i])
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
	return (count);
}

int	count_size(char const *s, char c, int i)
{
	int	count;

	count = 0;
	while (s[i] != c)
	{
		count++;
		i++;
	}
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		x;

	i = 0;
	x = -1;
	result = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	while (s[i])
	{
		if (s[i] != c)
		{
			j = -1;
			result[++x] = (char *)malloc(sizeof(char) * count_size(s, c, i));
			i--;
			while (s[++i] != c && s[i])
				result[x][++j] = s[i];
			result[x][j + 1] = '\0';
		}
		else
			i++;
	}
	result[x + 1] = 0;
	return (result);
}

/*int	main(void)
{
	char	str[] = "f J'aime le pain f";
	char	**result;
	int		i;

	result = ft_split(str, ' ');
	i = 0;
	while (i < 7)
	{
		printf("%s\n", result[i]);
		i++;
	}
	//printf("%d", count_word(str, ' '));
	//printf("%d", count_size(str, ' ', 7));
	return (0);
}*/