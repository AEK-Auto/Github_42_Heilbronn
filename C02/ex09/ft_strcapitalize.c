/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:53:35 by hoji              #+#    #+#             */
/*   Updated: 2025/05/07 12:12:47 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	ft_letter_is_alpha(char letter)
{
	if ((letter >= 'a' && letter <= 'z')
		|| (letter >= 'A' && letter <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_letter_is_numeric(char letter)
{
	if (letter >= '0' && letter <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	str = ft_strlowcase(str);
	if (ft_letter_is_alpha(str[0]))
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (!ft_letter_is_alpha(str[i - 1])
			&& !ft_letter_is_numeric(str[i - 1])
			&& ft_letter_is_alpha(str[i]))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	// char	str_in[] = "hi, how are you? 42words forty-two; fifty+and+one";
// 	char	str_in[] = "a1b2c3";
// 	char	*str_out;

// 	str_out = ft_strcapitalize(str_in);
// 	printf("The result is: %s \n", str_out);
// }