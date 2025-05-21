/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 02:16:24 by hoji              #+#    #+#             */
/*   Updated: 2025/05/21 17:25:12 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strswap(char **s1, char **s2)
{
	char	*s_temp;

	s_temp = *s1;
	*s1 = *s2;
	*s2 = s_temp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	size;

	if (!tab || !cmp)
		return ;
	size = 0;
	while (tab[size])
		size++;
	if (size <= 1)
		return ;
	while (--size >= 0)
	{
		i = 0;
		while (++i <= size)
		{
			if ((cmp(tab[i - 1], tab[i])) > 0)
				ft_strswap(&tab[i - 1], &tab[i]);
		}
	}
}

// int	ft_strcmp(char *s1, char *s2)
// {
// 	int	i;

// 	i = 0;
// 	while (s1[i] && s1[i] == s2[i])
// 		i++;
// 	return (s1[i] - s2[i]);
// }

// #include <stdio.h>
// int  main(int ac, char **av)
// {
//     int i = 0;

//     ft_advanced_sort_string_tab(av, &ft_strcmp);
//     while (i < ac)
//     {
//         printf("%s\n", av[i]);
//         i++;
//     }
// }