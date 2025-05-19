/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 12:36:59 by hoji              #+#    #+#             */
/*   Updated: 2025/05/08 13:52:20 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_putnbr_base(int nbr, char *base)
{
	int		l;
	long	n;

	n = nbr;
	l = ft_strlen(base);
	if (ft_check_base(base) == 0)
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n < l)
	{
		ft_putchar(base[n]);
	}
	if (n >= l)
	{
		ft_putnbr_base(n / l, base);
		ft_putnbr_base(n % l, base);
	}
}

// int	main()
// {
// 	char	*binary = "01";
// 	char	*decimal = "0123456789";
// 	char	*hexadecimal = "0123456789ABCDEF";
// 	char	*octal = "poneyvif";
// 	int	n = -4242;

// 	ft_putnbr_base(n, decimal);
// 	ft_putchar('|');
// 	ft_putnbr_base(n, binary);
// 	ft_putchar('|');
// 	ft_putnbr_base(n, hexadecimal);
// 	ft_putchar('|');
// 	ft_putnbr_base(n, octal);
// }