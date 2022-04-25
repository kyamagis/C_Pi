/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:33:51 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/05 19:52:05 by kyamagis         ###   ########.fr       */
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

	argn = 0;
	j = 0;
	while (argv[argn][j] != '\0')
	{
		ft_putchar(argv[argn][j]);
		j++;
	}
	ft_putchar('\n');
	return (0);
}
