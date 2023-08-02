/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakuzmin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:36:26 by vakuzmin          #+#    #+#             */
/*   Updated: 2023/07/27 17:22:32 by vakuzmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*new;

	if (src == 0)
		return (0);
	len = 0;
	while (src[len])
		len++;
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
/*
#include<string.h>
#include<stdio.h>
int main (void)
{
	char *str;
	str = ft_strdup("");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("hello 42");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("7fOhPqrNX1Dfw9ibMuZqSSB1n4ttPEpRqakEYx8eUB4YRUZ4cR");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("CwuYxMFCgzvwzkm5U92hTeukYl");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("okWt113qixk3g330sLtat0BZfznt3VWwjPaziYEIaLTS1SW");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("31ZKidh6t8WniVvHawrC");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("OrneZKLYkHzZvh1lPX14a0uzSzJvBCtWfBvWkzi7HGsKrAU");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("aKqjAMR5BF7438w15ngKrPWmu25900OjzU8lOg");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("EbRL2xT8kufUxjIdqEZTtjH32ejYC2T");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("msLImb5d");
	printf("%s\n", str);
	free(str);
	return (0);

}
*/
