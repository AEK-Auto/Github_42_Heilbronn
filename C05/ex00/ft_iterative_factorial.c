/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:48:17 by hoji              #+#    #+#             */
/*   Updated: 2025/05/13 19:04:48 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", ft_iterative_factorial(5));
// }