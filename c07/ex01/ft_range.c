/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:47:45 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/25 18:00:04 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*res;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	res = malloc(len * sizeof(int));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
    int min, max;
    int *result;
		int	i;

    min = 5;
    max = 15;
    result = ft_range(min, max);
		i = 0;
		while (i < max - min)
		{
		printf("%d ", result[i]);
		i++;
		}
		printf("\n");

		min = -5;
    max = -10;
    result = ft_range(min, max);
		i = 0;
		while (i < max - min)
		{
		printf("%d ", result[i]);
		i++;
		}
		printf("\n");

		min = 20;
    max = 20;
    result = ft_range(min, max);
		i = 0;
		while (i < max - min)
		{
		printf("%d ", result[i]);
		i++;
		}
		printf("\n");

		return (0);
}
*/
