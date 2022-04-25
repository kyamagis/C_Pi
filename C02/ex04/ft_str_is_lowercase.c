/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:56:40 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/01 17:24:01 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (!('a' <= str[i] && str[i] <= 'z'))
			flag = 0;
		i++;
	}
	return (flag);
}

/*int	main(void)
{
	printf("%d", ft_str_is_lowercase(""));
	printf("%d", ft_str_is_lowercase("abc"));
	printf("%d", ft_str_is_lowercase("abC"));
	printf("%d", ft_str_is_lowercase("a2c"));
	return (0);
}*/
