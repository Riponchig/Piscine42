/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:42:24 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/12 19:42:42 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write (1, &c, 1);
}

void	ft_write_comb( int a, int b)
{
	ft_write(48 + a / 10);
	ft_write(48 + a % 10);
	ft_write(' ');
	ft_write(48 + b / 10);
	ft_write(48 + b % 10);
	if (!(a == 98 && b == 99))
	{
		ft_write(',');
		ft_write(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write_comb(a, b);
			b++;
		}
		a++;
	}
}
