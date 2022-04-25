/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:36:59 by kyamagis          #+#    #+#             */
/*   Updated: 2021/12/28 16:57:22 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (!(('a' <= str[i] && str[i] <= 'z') \
		|| ('A' <= str[i] && str[i] <= 'Z')))
			flag = 0;
		i++;
	}
	return (flag);
}

/*int	main(void)
{
	printf("%d", ft_str_is_alpha(""));
	printf("%d", ft_str_is_alpha("Abc"));
	printf("%d", ft_str_is_alpha("1b3"));
	return (0);
}*/
