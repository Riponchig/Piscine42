/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:44:10 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/18 16:08:44 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
extern void	rush00(int x, int y);

int	main(int argc, char *argv[])
{
	rush00(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
