/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:42:14 by hoji              #+#    #+#             */
/*   Updated: 2025/05/06 16:46:19 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*str1 = "hello World";
// 	char	*str2 = "hello world";
// 	char	*str3 = "Hallo Welt";
// 	char	*str4 = "Hello World";
// 	printf("First test \n");
// 	printf("ft_strcmp | the result of %s and %s is: %d\n",
// 		str1, str2, ft_strcmp(str1, str2));
// 	printf("strcmp | the result of %s and %s is: %d\n",
// 		str1, str2, strcmp(str1, str2));
// 	printf("Second test \n");
// 	printf("ft_strcmp | the result of %s and %s is: %d\n",
// 		str3, str4, ft_strcmp(str3, str4));
// 	printf("strcmp | the result of %s and %s is: %d\n",
// 		str3, str4, strcmp(str3, str4));
// }
