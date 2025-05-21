/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmailov <ksmailov@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 21:51:59 by ksmailov          #+#    #+#             */
/*   Updated: 2025/05/11 16:42:58 by ksmailov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str);
void	ft_print_tab(char **tab, int size);
void	ft_free_tab(char **tab, int size);
char	**ft_init_tab(char *str, int size);
int		ft_get_size(char *str);
int		ft_valid_size(char *str, int par);
int		ft_solve(char **tab, int size);

int	main(int ac, char **av)
{
	int		size;
	char	**tab;

	if (ac != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	size = ft_get_size(av[1]);
	tab = ft_init_tab(av[1], size);
	if (size == 0)
		ft_putstr("Error\n");
	else if (tab)
	{
		if (ft_solve(tab, size))
			ft_print_tab(tab, size);
		else
			ft_putstr("Error\n");
		ft_free_tab(tab, size);
	}
	else
		ft_putstr("Error\n");
	return (0);
}
