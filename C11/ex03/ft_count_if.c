/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 23:58:56 by hoji              #+#    #+#             */
/*   Updated: 2025/05/20 13:06:19 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	n;

	i = -1;
	n = 0;
	while (++i < length)
		if (f(tab[i]))
			n++;
	return (n);
}
// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

// #include <stdio.h>
// int	main()
// {
// 	// char	*tab[] = {NULL};
// 	char	*tab[] = {"Hello", "world", NULL};
// 	int		n = 2;
// 	printf("%d\n", ft_count_if(tab, n, &ft_strlen));
// }