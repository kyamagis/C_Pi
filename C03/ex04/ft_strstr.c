/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:31:20 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/04 22:40:05 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		i++;
	}
	return (i);
}

void	*ft_findstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (str[i] != '\0')
	{
		j = i;
		k = 0;
		while ((str[j] == to_find[k]) && (str[j] != '\0'))
		{
			j++;
			k++;
		}
		if (to_find[k] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (ft_strlen(to_find) > ft_strlen(str))
		return (0);
	if (to_find[0] == '\0')
		return (str);
	else
	{
		return (ft_findstr(str, to_find));
	}
}

int	main(void)
{
	char	str[7] = "Hellow!";
	char	to_find[] = "ll";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", ft_strstr(str, ""));
	printf("%s\n", ft_strstr(str, "xyz"));
	printf("%s\n", ft_strstr("", to_find));
	printf("%s\n", ft_strstr("", ""));

	printf("\n");
	printf("%s\n", strstr(str, to_find));
	printf("%s\n", strstr(str, ""));
	printf("%s\n", strstr(str, "xyz"));
	printf("%s\n", strstr("", to_find));
	printf("%s\n", strstr("", ""));
	return (0);
}