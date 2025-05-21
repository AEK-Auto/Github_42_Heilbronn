/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmailov <ksmailov@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 23:31:35 by ksmailov          #+#    #+#             */
/*   Updated: 2025/05/10 23:31:40 by ksmailov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_duplicate(char **tab, int x, int y, int size)
{
	int	i;

	if (!tab[y][x])
		return (0);
	i = y;
	while (i--)
		if (tab[y][x] == tab[i][x])
			return (1);
	i = y;
	while (++i < size)
		if (tab[y][x] == tab[i][x])
			return (1);
	i = x;
	while (i--)
		if (tab[y][x] == tab[y][i])
			return (1);
	i = x;
	while (++i < size)
		if (tab[y][x] == tab[y][i])
			return (1);
	return (0);
}

void	ft_set_edges(int *axis, int *max, int delta, int size)
{
	if (delta > 0)
	{
		*axis = 0;
		*max = size;
	}
	else
	{
		*axis = size - 1;
		*max = -1;
	}
}

int	ft_height_col(char **tab, int x, int delta, int size)
{
	int	y;
	int	max;
	int	vmax;
	int	height;

	ft_set_edges(&y, &max, delta, size);
	vmax = 0;
	height = 0;
	while (y != max)
	{
		if (!tab[y][x])
			return (0);
		if (tab[y][x] > vmax)
		{
			vmax = tab[y][x];
			height++;
		}
		y += delta;
	}
	return (height);
}

int	ft_height_row(char **tab, int y, int delta, int size)
{
	int	x;
	int	max;
	int	vmax;
	int	height;

	ft_set_edges(&x, &max, delta, size);
	vmax = 0;
	height = 0;
	while (x != max)
	{
		if (!tab[y][x])
			return (0);
		if (tab[y][x] > vmax)
		{
			vmax = tab[y][x];
			height++;
		}
		x += delta;
	}
	return (height);
}
