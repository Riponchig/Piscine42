/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:13:56 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/25 15:20:48 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_calc(int nb)
{
	int	rez;
	int	left;
	int	mid;
	int	right;

	left = 1;
	right = nb;
	rez = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (mid <= nb / mid)
		{
			left = mid + 1;
			rez = mid;
		}
		else
			right = mid - 1;
	}
	return (rez);
}

int	ft_sqrt(int nb)
{
	int	rez;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	rez = ft_calc(nb);
	if (rez * rez == nb)
		return (rez);
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
    int a;

    a = ft_sqrt(2);
    printf("%d\n", a);

    a = ft_sqrt(2147483646);
    printf("%d\n", a);

    a = ft_sqrt(594823321);
    printf("%d\n", a);

    a = ft_sqrt(81);
    printf("%d\n", a);

    a = ft_sqrt(5);
    printf("%d\n", a);

    a = ft_sqrt(7);
    printf("%d\n", a);
    
	return 0;
}
*/
