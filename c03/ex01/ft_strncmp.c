/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:32:17 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/20 12:09:34 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i == n || (s1[i] == '\0' && s2[i] == '\0'))
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hell";
    int n = 5;

    int result = ft_strncmp(str1, str2, n);

    if (result < 0)
    {
        printf("str1 < str2\n");
    }
    else if (result > 0)
    {
        printf("str1 > str2\n");
    }
    else
    {
        printf("str1 = str2\n");
    }

    return 0;
}*/
