/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:53:35 by hoji              #+#    #+#             */
/*   Updated: 2025/05/07 16:01:03 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str1[] = "424242";
// 	char	str2[] = "Hello42";
// 	int	a;
// 	int	b;

// 	a = ft_str_is_numeric(str1);
// 	b = ft_str_is_numeric(str2);
// 	printf("The result of %s is: %d \n", str1, a);
// 	printf("The result of %s is: %d \n", str2, b);
// }