/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:45:59 by kyamagis          #+#    #+#             */
/*   Updated: 2021/12/28 18:22:12 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (!(' ' <= str[i] && str[i] <= '~'))
			flag = 0;
		i++;
	}
	return (flag);
}

/*int	main(void)
{
	printf("%d", ft_str_is_printable(""));
	printf("%d", ft_str_is_printable("~a1"));
	return (0);
}*/