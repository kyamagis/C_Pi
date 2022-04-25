/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:45:59 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/01 14:43:42 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print2(char x)
{
	char	c;

	if (x <= 9)
		c = '0' + x;
	else
		c = 'a' - 10 + x;
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((' ' <= str[i]) && (str[i] <= '~')))
		{
			ft_print('\\');
			ft_print2(str[i] / 16);
			ft_print2(str[i] % 16);
		}
		else
		{
			ft_print(str[i]);
		}
		i++;
	}
}

/*int	main(void)
{
	char str[] = "Concou\ntu vas bien ?";

	printf("%s" ,str);
	ft_putstr_non_printable(str);
	return 0;
}*/