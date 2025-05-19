/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 22:43:21 by hoji              #+#    #+#             */
/*   Updated: 2025/05/07 16:29:43 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char n)
{
	ft_putchar('\\');
	ft_putchar("0123456789abcdef"[n / 16]);
	ft_putchar("0123456789abcdef"[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_puthex(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

// int	main(void)
// {
// 	char	str[] = "Hello\nHoware you?";
// 	ft_putstr_non_printable(str);
// }