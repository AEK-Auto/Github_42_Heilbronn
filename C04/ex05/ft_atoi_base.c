/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:03:56 by hoji              #+#    #+#             */
/*   Updated: 2025/05/16 00:47:35 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_find_in_base(char c, char *base)
{
	int	index;

	index = 1;
	while (*base)
	{
		if (*base == c)
			return (index);
		base++;
		index++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	res;
	int	len_base;
	int	i;

	if (ft_check_base(base) == 0)
		return (0);
	sign = 1;
	res = 0;
	i = 0;
	len_base = ft_strlen(base);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_find_in_base(str[i], base) > 0)
	{
		res = res * len_base + ft_find_in_base(str[i], base) - 1;
		i++;
	}
	return (sign * res);
}

// #include <stdio.h>
// int	main()
// {
// 	char	binary[] = "01";
// 	char	decimal[] = "0123456789";
// 	char	hexadecimal[] = "0123456789ABCDEF";
// 	char	octal[] = "poneyvif";
// 	char	str[] = " ---+--+10234abpvi567";

// 	printf("Decimal | result of %s is: %d\n", str, ft_atoi_base(str, decimal));
// 	printf("Binary | result of %s is: %d\n", str, ft_atoi_base(str, binary));
// 	printf("Hexadecimal | result of %s is: %d\n", str,
// 			ft_atoi_base(str, hexadecimal));
// 	printf("Octal | result of %s is: %d\n", str, ft_atoi_base(str, octal));
// }