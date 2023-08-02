/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:47:04 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/23 13:56:20 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	rez;

	i = 0;
	rez = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		rez = rez * nb;
		i++;
	}
	return (rez);
}
/*
#include<stdio.h>
int	main(void)
{
	int	a;

	a = ft_iterative_power(2,4);
	printf("%d\n",a);
}
*/
