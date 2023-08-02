/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:41:48 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/27 15:06:30 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

int	ft_total_len(char **strs, int size, char *sep)
{
	int	i;
	int	sep_len;
	int	total_len;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		if (strs[i] != NULL)
			total_len += ft_strlen(strs[i]);
		i++;
	}
	sep_len = ft_strlen(sep);
	if (size > 1)
		total_len += (size - 1) * sep_len;
	return (total_len);
}

char	*ft_resultat(int size, char **strs, char *sep, char *rez)
{
	int		sep_len;
	int		i;
	int		pos;

	sep_len = ft_strlen(sep);
	pos = 0;
	i = 0;
	while (i < size)
	{
		if (strs[i] != NULL)
		{
			ft_strcpy(rez + pos, strs[i]);
			pos += ft_strlen(strs[i]);
			if (i < size - 1 && strs[i + 1] != NULL)
			{
				ft_strcpy(rez + pos, sep);
				pos += sep_len;
			}
		}
		i++;
	}
	return (rez);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		sep_len;
	char	*rez;

	if (size <= 0 || strs == NULL || sep == NULL)
	{
		rez = malloc(1);
		rez[0] = '\0';
		return (rez);
	}
	total_len = ft_total_len (strs, size, sep);
	if (size > 1)
	{
		sep_len = ft_strlen(sep);
		total_len += (size - 1) * sep_len;
	}
	else
		total_len = ft_strlen(strs[0]);
	rez = malloc (total_len + 1);
	if (rez == NULL)
		return (NULL);
	rez = ft_resultat (size, strs, sep, rez);
	rez[total_len] = '\0';
	return (rez);
}
/*
int	main(void)
{
	char *strs[] = {"hello", "world", "this", "text", "12"};
	char *sep = " / ";
	int size = sizeof(strs) / sizeof(strs[0]);
	char *result = ft_strjoin(size, strs, sep);
	printf("%s\n",result);
	return (0);
}
*/
