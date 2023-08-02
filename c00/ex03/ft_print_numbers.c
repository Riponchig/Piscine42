/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:19:57 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/12 18:36:14 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digit;
	int		i;

	i = 0;
	while (i < 10)
	{
		digit = i + '0';
		write(1, &digit, 1);
		i++;
	}
}
