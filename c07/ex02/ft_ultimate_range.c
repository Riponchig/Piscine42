/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:09:19 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/26 14:00:05 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*res;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	res = malloc(len * sizeof(int));
	if (res == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < len)
	{
		res[i] = min + i;
		i++;
	}
	*range = res;
	return (len);
}
/*
int main(void)
{
    int *range;
    int min;
    int max ;
	int	size;
	int	i;

	min = 5;
	max = -3;
    size = ft_ultimate_range(&range, min, max);

	i = 0;

	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
    return (0);
}
*/
