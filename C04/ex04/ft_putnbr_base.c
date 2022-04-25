/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 20:58:10 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/05 13:09:10 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_check_base(char *bace)
{
	int		bn;
	int		chk[128];
	char	c;

	bn = 0;
	while (bn < 128)
		chk[bn++] = 0;
	bn = 0;
	while (*bace != 0)
	{
		c = *bace;
		bace++;
		if ((c < '0') || (('9' > c) && (c > 'A')) \
		|| (('Z' > c) && (c > 'a')) || (c > 'z'))
			return (-1);
		bn++;
	}
	if (bn < 2)
		return (-1);
	return (bn);
}

void	ft_print_n_base(unsigned int x, char *base, int n)
{
	char	s[31];
	int		p;

	p = 30;
	while (1)
	{
		s[p] = base[x % n];
		x /= n;
		if (x == 0)
			break ;
		p--;
	}
	write(1, &s[p], 31 - p);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				bn;
	unsigned int	x;

	bn = ft_check_base(base);
	if (bn < 0)
		return ;
	x = nbr;
	if (nbr < 0)
	{
		write(1, "-", 1);
		x = -nbr;
	}
	ft_print_n_base(x, base, bn);
}

int	main(void)
{
	printf("01\n ");
	ft_putnbr_base(1234, "01");
	printf("\n");

	printf("01\n ");
	ft_putnbr_base(-1234, "01");
	printf("\n");

	printf("poneyvif\n ");
	ft_putnbr_base(1234, "poneyvif");
	printf("\n");

	printf("0123456789\n ");
	ft_putnbr_base(1234, "0123456789");
	printf("\n");

	printf("0123456789ABCDEF\n ");
	ft_putnbr_base(1234, "0123456789ABCDEF");
	printf("\n");

	printf("+01\n ");
	ft_putnbr_base(1234, "+01");
	printf("\n");

	printf("00\n ");
	ft_putnbr_base(1234, "00");
	printf("\n");

	printf("0\n ");
	ft_putnbr_base(1234, "0");
	printf("\n");
}