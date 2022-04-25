/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:43:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/04 14:09:11 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argn, char **argv)
{
	int	j;

	argn = 1;
	while (argv[argn] != '\0')
	{
		j = 0;
		while (argv[argn][j] != '\0')
		{
			ft_putchar(argv[argn][j]);
			j++;
		}
		ft_putchar('\n');
		argn++;
	}
	return (0);
}
