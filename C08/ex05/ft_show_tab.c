/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:32:23 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/07 18:34:45 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		ft_putchar(str[j]);
		j++;
	}
}

void	ft_putnbr(int nb)
{	
	unsigned int	x;
	int				dig;

	dig = 0;
	if (nb > 0)
	{	
		x = nb;
		ft_dig_p(dig, x);
		return ;
	}
	else if (nb == 0)
	{	
		x = nb;
		ft_putchar('0');
		return ;
	}
	else if (nb < 0)
	{
		x = -nb;
		ft_putchar('-');
		ft_dig_p(dig, x);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		write(1, par[i].str, par[i].size);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putnbr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}

/*int	main(void)
{
	char	*av[1000] = {"omae", "wa", "mou", "shindeiru"}
	int	ac;
	t_stock_str *data;

	ac = 3;
	data = ft_strs_to_tab(ac, av);
	ft_strcpy(data[0].copy, "test");
	ft_show_tab(data);
		return (0);
}*/