/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:53:35 by hoji              #+#    #+#             */
/*   Updated: 2025/05/09 20:15:31 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char	str1[] = "";
	char	str2[] = "Hello42 \t All";
	int	a;
	int	b;

	a = ft_str_is_printable(str1);
	b = ft_str_is_printable(str2);
	printf("The result of %s is: %d \n", str1, a);
	printf("The result of %s is: %d \n", str2, b);
}