/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:53:24 by hoji              #+#    #+#             */
/*   Updated: 2025/05/16 10:42:17 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	if (size > 0)
		len += (size - 1) * ft_strlen(sep);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i != size - 1 && size > 0)
			ft_strcat(str, sep);
		i++;
	}
	str[ft_strlen(str)] = '\0';
	return (str);
}

// #include <stdio.h>
// int	main()
// {
// 	// char	*strs[] = {"haha", "lala", "kaka", "zaza", "yaya"};
// 	char	*strs;
// 	//char	*strs = "";
// 	char 	*sep = "";
// 	char	*str;
// 	int		size = 0;

// 	// printf("%d\n", ft_strlen(sep));
// 	str = ft_strjoin(size, &strs, sep);
// 	printf("%s\n", str);
// 	free(str);
// }