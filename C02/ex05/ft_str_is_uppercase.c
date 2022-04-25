/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 14:00:52 by kyamagis          #+#    #+#             */
/*   Updated: 2021/12/28 17:40:53 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (!('A' <= str[i] && str[i] <= 'Z'))
			flag = 0;
		i++;
	}
	return (flag);
}

/*int	main(void)
{
	printf("%d", ft_str_is_uppercase(""));
	printf("%d", ft_str_is_uppercase("ABC"));
	printf("%d", ft_str_is_uppercase("AB3"));
	printf("%d", ft_str_is_uppercase("A2C"));
	return (0);
}*/