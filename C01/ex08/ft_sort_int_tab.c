/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:59:26 by hoji              #+#    #+#             */
/*   Updated: 2025/05/05 15:33:47 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	int	tab[5];
// 	int	size;
// 	int	i;
// 	int	j;

// 	tab [0] = 7;
// 	tab [1] = 3;
// 	tab [2] = 9;
// 	tab [3] = 5;
// 	tab [4] = 1;
// 	size = 5;
// 	i = 0;
// 	j = 0;
// 	printf("String before function is: \n");
// 	while (i < size)
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// 	ft_sort_int_tab(tab, size);
// 	printf("String before function is: \n");
// 	while (j < size)
// 	{
// 		printf("%d\n", tab[j]);
// 		j++;
// 	}
// }
