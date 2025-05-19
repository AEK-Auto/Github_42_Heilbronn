/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:07:59 by hoji              #+#    #+#             */
/*   Updated: 2025/05/07 11:59:23 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	a[20];
// 	char	b[] = "Hello World!";

// 	ft_strncpy(a, b, 5);
// 	printf("ft_strncpy | String of source is: %s \n", b);
// 	printf("ft_strncpy | String of destnation is: %s \n", a);
// 	strncpy(a, b, 5);
// 	printf("strncpy | String of source is: %s \n", b);
// 	printf("strncpy | String of destnation is: %s \n", a);
// }
