/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:14:08 by hoji              #+#    #+#             */
/*   Updated: 2025/05/09 18:25:10 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_str(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_strswap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 == *str2 && *str1)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
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
				ft_strswap(&av[i], &av[j]);
	}
	i = 0;
	while (++i < ac)
	{
		ft_putchar_str(av[i]);
		write(1, "\n", 1);
	}
}
