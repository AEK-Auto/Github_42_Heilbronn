/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 09:00:25 by hoji              #+#    #+#             */
/*   Updated: 2025/05/13 18:58:14 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *res)
{
	int	i;

	i = -1;
	while (++i < 10)
		ft_putchar(res[i] + '0');
	ft_putchar('\n');
}

int	ft_check(int *res, int n)
{
	int	i;

	i = -1;
	if (n == 0)
		return (1);
	else
	{
		while (++i < n)
		{
			if (res[i] == res[n])
				return (0);
			if (res[i] - res[n] == i - n || res[i] - res[n] == n - i)
				return (0);
		}
	}
	return (1);
}

void	ft_solve(int *res, int n, int *n_res)
{
	int	i;

	i = -1;
	if (n == 10)
	{
		(*n_res)++;
		ft_print(res);
	}
	else
	{
		while (++i < 10)
		{
			res[n] = i;
			if (ft_check(res, n))
				ft_solve(res, n + 1, n_res);
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	res[10];
	int	n_res;

	n_res = 0;
	ft_solve(res, 0, &n_res);
	return (n_res);
}

// #include <stdio.h>
// int	main()
// {
// 	int	n;

// 	n = ft_ten_queens_puzzle();
// 	printf("%d\n", n);
// 	return (n);
// }
