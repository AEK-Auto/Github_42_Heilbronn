/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:20:18 by hoji              #+#    #+#             */
/*   Updated: 2025/05/21 02:21:54 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_strswap(char **s1, char **s2)
{
	char	*s_temp;

	s_temp = *s1;
	*s1 = *s2;
	*s2 = s_temp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	size;

	size = 0;
	while (tab[size])
		size++;
	if (size <= 1)
		return ;
	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
				ft_strswap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

// #include <stdio.h>
// int  main(int ac, char **av)
// {
//     int i = 0;

//     ft_sort_string_tab(av);
//     while (i < ac)
//     {
//         printf("%s\n", av[i]);
//         i++;
//     }
// }