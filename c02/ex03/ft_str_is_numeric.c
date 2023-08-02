/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:22:31 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/17 13:22:53 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		ret;
	char	c;

	i = 0;
	ret = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!((c >= '0') && (c <= '9')))
		{
			ret = 0;
		}
		i++;
	}
	return (ret);
}
