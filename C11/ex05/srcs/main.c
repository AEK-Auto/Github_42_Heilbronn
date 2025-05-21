/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoji <hoji@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 21:27:59 by hoji              #+#    #+#             */
/*   Updated: 2025/05/21 11:46:34 by hoji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	do_operator(int a, char op, int b)
{
	int	res;
	int	(*do_op[5])(int, int);

	res = 0;
	do_op[0] = &ft_op_add;
	do_op[1] = &ft_op_sub;
	do_op[2] = &ft_op_div;
	do_op[3] = &ft_op_mul;
	do_op[4] = &ft_op_mod;
	if (op == '+')
		res = do_op[0](a, b);
	else if (op == '-')
		res = do_op[1](a, b);
	else if (op == '/')
		res = do_op[2](a, b);
	else if (op == '*')
		res = do_op[3](a, b);
	else if (op == '%')
		res = do_op[4](a, b);
	return (res);
}

int	main(int ac, char **av)
{
	int		a;
	int		b;
	char	op;
	int		res;

	if (ac == 4)
	{
		a = ft_atoi(av[1]);
		b = ft_atoi(av[3]);
		op = av[2][0];
		if (!(op == '+' || op == '-' || op == '/'
				|| op == '%' || op == '*'))
			ft_putstr("0\n");
		else if (op == '/' && b == 0)
			ft_putstr("Stop : division by zero\n");
		else if (op == '%' && b == 0)
			ft_putstr("Stop : modulo by zero\n");
		else
		{
			res = do_operator(a, op, b);
			ft_putnbr(res);
			ft_putstr("\n");
		}
	}
	return (0);
}
