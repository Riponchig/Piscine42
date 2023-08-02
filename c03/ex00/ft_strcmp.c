/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:19:18 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/20 12:13:26 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hell";

    int result = ft_strcmp(str1, str2);

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
}
*/
