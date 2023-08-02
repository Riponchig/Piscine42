/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:04:03 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/23 13:11:09 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		f = f * i;
		i++;
	}
	return (f);
}
/*
#include<stdio.h>
int	main(void)
{
	int	a;
	
	a = ft_iterative_factorial(5);
	printf("%d\n",a);
}
*/
