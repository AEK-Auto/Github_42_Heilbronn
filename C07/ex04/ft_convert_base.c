/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:26:37 by hoji              #+#    #+#             */
/*   Updated: 2025/05/14 18:48:16 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_check_base(char *base);
int		ft_find_in_base(char c, char *base);

int	ft_nbr_base_len(int n, char *base)
{
	int	l;
	int	count;

	count = 1;
	l = ft_strlen(base);
	if (ft_check_base(base) == 0)
		return (0);
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n >= l)
	{
		n = n / l;
		count++;
	}
	return (count);
}

char	*ft_nbr_base_str(int nbr, char *base, char *str, int size)
{
	int		l;
	long	n;
	int		i;
	int		j;

	n = nbr;
	i = 0;
	j = size - 1;
	l = ft_strlen(base);
	if (n < 0)
	{
		str[i] = '-';
		i++;
		n = -n;
	}
	while (j >= i)
	{
		str[j] = base[n % l];
		n = n / l;
		j--;
	}
	str[size] = '\0';
	return (str);
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_decimal;
	int		len_str;
	char	*str;

	if (!ft_check_base(base_from) || (!ft_check_base(base_to)))
		return (NULL);
	nbr_decimal = ft_atoi_base(nbr, base_from);
	len_str = ft_nbr_base_len(nbr_decimal, base_to);
	str = malloc((len_str + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str = ft_nbr_base_str(nbr_decimal, base_to, str, len_str);
	return (str);
}

// #include <stdio.h>
// int	main()
// {
// 	char	binary[] = "01";
// 	char	decimal[] = "0123456789";
// 	char	hexadecimal[] = "0123456789ABCDEF";
// 	char	octal[] = "poneyvif";
// 	char	str[] = " ---+--+10234abpvi567";
// 	//char	str[] = "-42";

// 	printf("Decimal | result of %s is: %d\n", str, ft_atoi_base(str, decimal));
// 	printf("Binary | result of %s is: %d\n", str, ft_atoi_base(str, binary));
// 	printf("Hexadecimal | result of %s is: %d\n", str,
// 			ft_atoi_base(str, hexadecimal));
// 	printf("Octal | result of %s is: %d\n", str, ft_atoi_base(str, octal));
// 	printf("-----------------------------\n");
// 	printf("From Decimal to Octal | result of | %s | is: %s\n", 
// 			str, ft_convert_base(str, decimal, octal));
// 	printf("From Hexadecimal to Binnary | result of | %s | is: %s\n", 
// 			str, ft_convert_base(str, hexadecimal, binary));
// 	printf("From Decimal to Binary | result of | %s | is: %s\n", 
// 			str, ft_convert_base(str, decimal, binary));
// 	free(str);
// }