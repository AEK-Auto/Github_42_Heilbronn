/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:42:14 by hoji              #+#    #+#             */
/*   Updated: 2025/05/06 17:17:59 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*str1 = "hello world!";
// 	char	*str2 = "hello world";
// 	char	*str3 = "Hallo Welt";
// 	char	*str4 = "Hello World";
//     unsigned    int n = 12;
// 	printf("First test \n");
// 	printf("ft_strcmp | the result of (%s) and (%s) of first %d is: %d\n",
// 		str1, str2, n, ft_strncmp(str1, str2, n));
// 	printf("strcmp | the result of (%s) and (%s) of first %d is: %d\n",
// 		str1, str2, n, strncmp(str1, str2, n));
// 	printf("Second test \n");
// 	printf("ft_strcmp | the result of (%s) and (%s) of first %d is: %d\n",
// 		str3, str4, n, ft_strncmp(str3, str4, n));
// 	printf("strcmp | the result of (%s) and (%s) of first %d is: %d\n",
// 		str3, str4, n, strncmp(str3, str4, n));
// }