/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:48:36 by hoji              #+#    #+#             */
/*   Updated: 2025/05/19 09:57:21 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_find_seperator(char c, char *str)
{
	while (*str)
	{
		if (c == *str++)
			return (1);
	}
	return (0);
}

int	ft_count_len_next_word(char *str, char *sep)
{
	int	i;
	int	l;

	i = -1;
	l = 0;
	while (str[++i])
	{
		if (!ft_find_seperator(str[i], sep))
		{
			l++;
			if (ft_find_seperator(str[i + 1], sep)
				|| str[i + 1] == '\0')
				return (l);
		}
	}
	return (0);
}

int	ft_count_num_words(char *str, char *sep)
{
	int	i;
	int	n;

	i = -1;
	n = 0;
	while (str[++i])
	{
		if (!ft_find_seperator(str[i], sep)
			&& ft_find_seperator(str[i + 1], sep))
			n++;
		if (!ft_find_seperator(str[i], sep)
			&& str[i + 1] == '\0')
			n++;
	}
	return (n);
}

char	*ft_words_cpy(char *src, int l)
{
	int		i;
	char	*result;

	result = malloc((l + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < l)
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	int		i;
	int		l;
	char	**result;

	i = -1;
	size = ft_count_num_words(str, charset);
	result = malloc((size + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (++i < size)
	{
		while (*str && ft_find_seperator(*str, charset))
			str++;
		l = ft_count_len_next_word(str, charset);
		result[i] = ft_words_cpy(str, l);
		str += l;
	}
	result[size] = 0;
	return (result);
}

#include <stdio.h>
int	main()
{
	char	str[] = "hello,world,";
	char	sep[] = ",";
	char	**tab = ft_split(str, sep);
	int		n = ft_count_num_words(str, sep);
	int		i = 0;

	printf("%d\n", n);
	printf("%d\n", ft_count_len_next_word(str, sep));
	while (i <= n)
	{
		printf("%s\n", tab[i]);
		i++;
		free(tab[i]);
	}
	free(tab);
}