/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 16:29:07 by kyamagis          #+#    #+#             */
/*   Updated: 2021/12/30 17:25:54 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_str(int *digx, int *ansnum, int *x)
{
	int		i;
	char	c;

	if (*ansnum != 0)
		write(1, ", ", 2);
	++*ansnum;
	i = 0;
	while (i <= *x)
	{
		c = '0' + digx[i];
		write(1, &c, 1);
		i++;
	}
}

void	ft_print_combn(int n)
{	
	int	digx[9];
	int	ansnum;
	int	x;

	x = 0;
	ansnum = 0;
	digx[0] = -1;
	while (x >= 0)
	{
		digx[x]++;
		if (digx[x] > 9)
			x--;
		else
		{
			if (x < n - 1)
			{
				digx[x + 1] = digx[x];
				++x;
			}
			else
				print_str(digx, &ansnum, &x);
		}
	}
}

/*int	main(void)
{
	ft_print_combn(9);
}*/