/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:54:25 by hoji              #+#    #+#             */
/*   Updated: 2025/05/07 16:14:19 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(src);
	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	a[20];
// 	char	b[] = "Hello World!";
// 	unsigned int	n = 12;
// 	unsigned int	l1;
// 	unsigned int	l2;

// 	l1 = ft_strlcpy(a, b, n);
// 	printf("ft_strlcpy | String of source with size (%d)is: %s \n", n, b);
// 	printf("ft_strlcpy | String of destnation (%d)is: %s \n", l1, a);
// 	l2 = strlcpy(a, b, n);
// 	printf("strlcpy | String of source with size (%d) is: %s \n", n, b);
// 	printf("strlcpy | String of destnation (%d) is: %s \n", l2, a);
// }
