/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 21:44:41 by hoji              #+#    #+#             */
/*   Updated: 2025/05/21 01:27:22 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = -1;
	if (length <= 0)
		return ;
	while (++i < length)
		f(tab[i]);
}

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	long	n;

// 	n = nb;
// 	if (n < 0)
// 	{
// 		ft_putchar('-');
// 		n = -n;
// 	}
// 	if (n <= 9)
// 	{
// 		ft_putchar(n + '0');
// 	}
// 	else
// 	{
// 		ft_putnbr(n / 10);
// 		ft_putnbr(n % 10);
// 	}
// }

// int	main()
// {
// 	int	tab[5] = {1, 2, 3, 4, 5};
// 	int		n = 5;
// 	ft_foreach(tab, n, &ft_putnbr);
// }