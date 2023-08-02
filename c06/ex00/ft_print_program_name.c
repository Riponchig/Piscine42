/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:34:03 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/21 13:11:48 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*arg;

	arg = argv[0];
	if (argc < 1)
		return (1);
	i = 0;
	while (arg[i])
	{
		write(1, &arg[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
