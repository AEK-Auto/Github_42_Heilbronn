/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:44:26 by hoji              #+#    #+#             */
/*   Updated: 2025/05/05 15:20:32 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

// int	main(void)
// {
// 	int	tab[5];
// 	int	size;
// 	int	i;
// 	int	j;

// 	tab [0] = 1;
// 	tab [1] = 2;
// 	tab [2] = 3;
// 	tab [3] = 4;
// 	tab [4] = 5;
// 	size = 5;
// 	i = 0;
// 	j = 0;
// 	printf("String before function is: \n");
// 	while (i < size)
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// 	ft_rev_int_tab(tab, size);
// 	printf("String before function is: \n");
// 	while (j < size)
// 	{
// 		printf("%d\n", tab[j]);
// 		j++;
// 	}
// }
