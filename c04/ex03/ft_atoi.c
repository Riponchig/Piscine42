/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:58:56 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/24 16:38:04 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	rez;
	int	sign;

	i = 0;
	rez = 0;
	sign = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	while ((str[i] == '+' || str[i] == '-') && str[i])
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		rez = rez * 10 + (str[i] - '0');
		i++;
	}
	return (sign * rez);
}
/*
#include <stdio.h>
int main(void)
{
    char str[] = "  -1234ab567";
    int num = ft_atoi(str);
    printf("%d\n", num);
    return 0;
}
*/
