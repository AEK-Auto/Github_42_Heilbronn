/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 23:47:49 by hoji              #+#    #+#             */
/*   Updated: 2025/05/20 13:03:41 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = -1;
	while (tab[++i])
		if (f(tab[i]))
			return (1);
	return (0);
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
// 	char	*tab[] = {"Hello", "world"};
// 	printf("%d\n", ft_any(tab, &ft_strlen));
// }
