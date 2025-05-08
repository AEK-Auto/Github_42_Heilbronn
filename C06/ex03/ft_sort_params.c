/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 20:17:10 by ksmailov          #+#    #+#             */
/*   Updated: 2025/05/08 22:16:57 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (++i < ac - 1)
	{
		j = i;
		while (++j < ac)
			if (ft_strcmp(av[i], av[j]) > 0)
				ft_swap(&av[i], &av[j]);
	}
	i = 0;
	while (++i < ac)
		ft_putstr(av[i]);
}
