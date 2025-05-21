/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 00:02:32 by hoji              #+#    #+#             */
/*   Updated: 2025/05/21 20:19:29 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort_up(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort_down(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if ((ft_is_sort_up(tab, length, f))
		|| (ft_is_sort_down(tab, length, f)))
		return (1);
	return (0);
}

// int	ft_cmp(int a, int b)
// {
// 	return (a - b);
// }

// #include <stdio.h>
// int	main()
// {
// 	int	tab[]= {1, 1};
// 	int	n = 2;
// 	printf("%d\n", ft_is_sort(tab, n, &ft_cmp));
// }