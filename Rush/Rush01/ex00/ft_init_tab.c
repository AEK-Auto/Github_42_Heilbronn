/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 23:43:40 by ksmailov          #+#    #+#             */
/*   Updated: 2025/05/11 19:50:57 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_print_tab(char **tab, int size);

int	ft_valid_size(char *str, int param)
{
	int	i;
	int	size;

	size = param / 4;
	i = -1;
	while (++i < param)
	{
		if (*str < '1' || *str > size + '0')
			return (0);
		str += 2;
	}
	return (size);
}

int	ft_get_size(char *str)
{
	int	i;
	int	param;

	param = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '9')
			param++;
		else
			return (0);
		if (str[++i] == ' ' && str[++i] == '\0')
			return (0);
	}
	if (param % 4 != 0 || param < 4 || param > 36)
		return (0);
	return (ft_valid_size(str, param));
}

char	**ft_init_tab(char *str, int size)
{
	char	**tab;
	int		x;
	int		y;

	tab = malloc(size * sizeof(char *));
	if (!tab)
		return (NULL);
	y = -1;
	while (++y < size)
	{
		tab[y] = malloc((size + 4) * sizeof(char));
		if (!tab[y])
			return (NULL);
		x = -1;
		while (++x < size)
			tab[y][x] = 0;
		x = -1;
		while (++x < 4)
			tab[y][size + x] = str[2 * (y + x * size)] - '0';
	}
	ft_print_tab(tab, size);
	return (tab);
}

void	ft_free_tab(char **tab, int size)
{
	while (size--)
		free(tab[size]);
	free(tab);
}
