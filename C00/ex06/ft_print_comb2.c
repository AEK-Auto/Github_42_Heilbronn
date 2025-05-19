/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 21:06:53 by hoji              #+#    #+#             */
/*   Updated: 2025/05/02 10:14:08 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar(48 + i / 10);
			ft_putchar(48 + i % 10);
			ft_putchar(' ');
			ft_putchar(48 + j / 10);
			ft_putchar(48 + j % 10);
			if (i != 98)
			{
				write(1, &", ", 2);
			}
			j++;
		}
		i++;
	}
	write(1, &"\n", 1);
}

// int	main(void)
// {
// 	ft_print_comb2();
// }
