/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:17:21 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/23 15:37:19 by vakuzmin         ###   ########.fr       */
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
/*
#include<stdio.h>
int	main(void)
{
	int	a;
	int i;

	i = 0;

	a = ft_is_prime(2147483647);
	printf("%d\n",a);

	a = ft_is_prime(2147483646);
	printf("%d\n",a);

	a = ft_is_prime(996);
	printf("%d\n",a);

	a = ft_is_prime(997);
	printf("%d\n",a);

	while (i < 1000)
	{
		a = ft_is_prime(i);
		if (a == 1)
		{
			printf("%d == %d\n", i, a);
		}
		i++;
	}
}
*/
