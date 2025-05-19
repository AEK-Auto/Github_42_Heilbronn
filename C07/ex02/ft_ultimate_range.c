/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:16:53 by hoji              #+#    #+#             */
/*   Updated: 2025/05/13 23:06:43 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = malloc(len * sizeof(int));
	if (!*range)
		return (-1);
	i = -1;
	while (++i < len)
		(*range)[i] = min + i;
	return (len);
}

// #include <stdio.h>
// int	main()
// {
// 	int	*array = NULL;
// 	int	i = -1;
// 	int	min = -5;
// 	int	max = 10;
// 	int	len;
// 	len = ft_ultimate_range(&array, min, max);
// 	while(++i < (max - min))
// 		printf("%d ,", (array)[i]);
// 	printf("\n%d\n", len);
// 	free(array);
// }