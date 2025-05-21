/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 23:36:44 by hoji              #+#    #+#             */
/*   Updated: 2025/05/20 12:28:59 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*array;

	if (length <= 0)
		return (NULL);
	array = malloc(length * sizeof(int));
	if (!array)
		return (NULL);
	i = -1;
	while (++i < length)
		array[i] = f(tab[i]);
	return (array);
}

// int	ft_recursive_factorial(int nb)
// {
// 	if (nb < 0)
// 		return (0);
// 	if (nb < 2)
// 		return (1);
// 	else
// 		return (nb * ft_recursive_factorial(nb -1));
// }

// #include <stdio.h>

// int	main()
// {
// 	int	tab[5] = {1, 2, 3, 4, 5};
// 	int	*array;

// 	int		n = 5;
// 	int 	i = 0;
// 	array = malloc(5 * sizeof(int));
// 	if (!array)
// 		return (0);
// 	array = ft_map(tab, n, &ft_recursive_factorial);
// 	while (i < n)
// 		printf("%d\n", array[i++]);	
// 	free(array);
// }