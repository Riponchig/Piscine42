/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:38:55 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/23 16:00:58 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long	a;

	if (nb <= 1)
		return (2);
	while (0 == 0)
	{
		a = ft_is_prime(nb);
		if (a == 1)
			return (nb);
		nb++;
	}
}
/*
#include<stdio.h>
int	main(void)
{
	int	a;
	int i;

	i = 0;

	a = ft_find_next_prime(2147483647);
	printf("%d\n",a);

	a = ft_find_next_prime(2147483646);
	printf("%d\n",a);

	a = ft_find_next_prime(996);
	printf("%d\n",a);

	a = ft_find_next_prime(997);
	printf("%d\n",a);

	while (i < 1000)
	{
		a = ft_find_next_prime(i);
		printf("%d == %d\n", i, a);
		i++;
	}
}
*/
