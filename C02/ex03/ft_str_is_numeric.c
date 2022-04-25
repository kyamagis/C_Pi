/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:52:02 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/01 17:23:23 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			flag = 0;
		i++;
	}
	return (flag);
}

/*int	main(void)
{
	printf("%d", ft_str_is_numeric(""));
	printf("%d", ft_str_is_numeric("123"));
	printf("%d", ft_str_is_numeric("1q9"));
	return (0);
}*/