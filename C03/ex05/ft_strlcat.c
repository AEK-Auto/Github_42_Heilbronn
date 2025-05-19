/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:42:14 by hoji              #+#    #+#             */
/*   Updated: 2025/05/08 17:42:22 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_expected;

	if (size > ft_strlen(dest))
	{
		size_expected = ft_strlen(src) + ft_strlen(dest);
	}
	else
	{
		size_expected = ft_strlen(src) + size;
	}
	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (size_expected);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	str1[20] = "hello ";
// 	char	*str2 = "world";
// 	char	str3[20] = "hello ";
// 	char	*str4 = "world";
// 	unsigned int	size = 8;
// 	unsigned int	a;
// 	unsigned int	b;
// 	a = ft_strlcat(str1, str2, size);
// 	b = strlcat(str3, str4, size);
// 	printf("ft_strlcat | the result (expected length %d) is : %s\n", a, str1);
// 	printf("strlcat | the result (expected length %d) is: %s\n", b, str3);
// }
