/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:25:57 by hoji              #+#    #+#             */
/*   Updated: 2025/05/19 18:58:24 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

// void	ft_putchar(char c);
// void	ft_putstr(char *str);
// void	ft_putnbr(int nb);
// void	ft_show_tab(struct s_stock_str *par);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;

	len = ft_strlen(src);
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	return (ft_strcpy(dest, src));
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	if (!*av || ac < 0)
		return (NULL);
	tab = malloc((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

// int	main()
// {
// 	t_stock_str *tab;
// 	char	*array[] = {"Ingolstadt", "Berlin", "Heilbronn", "Wolfsburg"};
// 	int		n = 4;
// 	int		i = -1;

// 	tab = ft_strs_to_tab(n, array);
// 	ft_show_tab(tab);
// }
