/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:39:36 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/20 19:06:47 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb, int len, char *base)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= len)
	{
		ft_putnbr(n / len, len, base);
	}
	ft_putchar(base[n % len]);
}

int	ft_len(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	return (l);
}

int	check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] <= ' ' || base[i] >= 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	len_base = ft_len(base);
	if (len_base <= 1 || check(base) != 1)
		return ;
	ft_putnbr(nbr, len_base, base);
}
/*
#include <stdio.h>

int main(void)
{
    int number = 16;
    char custom_base[] = "01234567";

    printf("Number %d Base %s: ", number, custom_base);
	printf("\n");
    ft_putnbr_base(number, custom_base);
    printf("\n");

    return 0;
}
*/
