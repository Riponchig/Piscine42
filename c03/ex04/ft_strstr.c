/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:49:14 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/20 12:29:37 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr_str;
	char	*ptr_to_find;
	char	*temp_ptr;

	if (*to_find == '\0')
		return (str);
	ptr_str = str;
	ptr_to_find = to_find;
	while (*ptr_str != 0)
	{
		if (*ptr_str == *ptr_to_find)
		{
			temp_ptr = ptr_str;
			while (*ptr_to_find != '\0' && *temp_ptr == *ptr_to_find)
			{
				temp_ptr++;
				ptr_to_find++;
			}
			if (*ptr_to_find == '\0')
				return (ptr_str);
			ptr_to_find = to_find;
		}
		ptr_str++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[] = "Hello World 123545";
    char str2[] = "Hle";
    char *rez = ft_strstr(str1, str2);
    printf("%s\n", rez);
	
	char *rez2 = strstr(str1, str2);
	printf("%s\n", rez2);
    return 0;
}
*/
