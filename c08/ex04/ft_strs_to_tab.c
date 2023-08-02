/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 09:06:42 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/08/01 19:36:39 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"ft_stock_str.h"

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*new;

	if (src == 0)
		return (0);
	len = ft_len(src);
	new = malloc(len + 1);
	if (new == 0)
		return (0);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			i;

	result = malloc((ac + 1) * sizeof(t_stock_str));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		result[i].str = av[i];
		result[i].size = ft_len(av[i]);
		result[i].copy = ft_strdup(av[i]);
		i++;
	}
	result[i].str = 0;
	return (result);
}
