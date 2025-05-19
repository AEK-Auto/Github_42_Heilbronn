/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:12:00 by hoji              #+#    #+#             */
/*   Updated: 2025/05/13 22:54:40 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	len;

	if (min >= max)
		return (NULL);
	len = max - min;
	array = malloc(len * sizeof(int));
	if (!array)
		return (NULL);
	i = -1;
	while (++i < len)
		array[i] = min + i;
	return (array);
}

// #include <stdio.h>
// int	main()
// {
// 	int	*array;
// 	int	i = 0;
// 	int	min = -5;
// 	int	max = 9;

// 	array = ft_range(min, max);
// 	i = 0;
// 	while(i < (max - min + 1))
// 	{
// 		printf("%d ,", array[i]);
// 		i++;
// 	}
// 	free(array);
// }