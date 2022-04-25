/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 21:32:04 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/05 11:53:29 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>
#include<unistd.h>*/

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
		if (chk[c] != 0)
			return (-1);
		chk[c] = 1;
		bn++;
	}
	if (bn < 2)
		return (-1);
	return (bn);
}

int	atoi_b(char *str, char *base, int bn)
{
	int				i;
	unsigned int	x;

	x = 0;
	while (1)
	{
		i = 0;
		while (*str != base[i])
		{
			i++;
			if (i >= bn)
				return (x);
		}
		x = x * bn + 1;
		str++;
	}
	return (x);
}

int	ft_atoi_base(char *str, char *base)
{
	int				bn;
	int				sgn;
	unsigned int	x;

	bn = ft_check_base(base);
	if (bn < 0)
		return (0);
	while (((*str >= 9) && (*str <= 13)) || (*str == ' '))
		str++;
	sgn = 1;
	while ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			sgn *= -1;
		str++;
	}
	x = atoi_b(str, base, bn);
	return (x * sgn);
}

/*void	test_fn(char *str, char *base)
{
	int x;
	x = ft_atoi_base(str, base);
	printf("base = %s str = %s ans = %d\n", str, base, x);
}
int	main(void)
{
	test_fn("1234","01");
	test_fn("1234","poneyvif");
	test_fn("one","poneyvif");
	test_fn("1234","0123456789");
	test_fn("1234","0123456789ABCDEF");
	test_fn(" ---+--+1234ab567","0123456789");
}*/