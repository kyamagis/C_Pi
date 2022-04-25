/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 19:32:45 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/05 11:52:15 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	num;
	int	i;
	int	flag;

	flag = 0;
	num = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\f') || (str[i] == '\n') \
	|| (str[i] == '\r') || (str[i] == '\t') || (str[i] == '\v'))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			flag = !flag;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		num = 10 * num + (str[i] - '0');
		i++;
	}
	if (flag)
		num *= -1;
	return (num);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	
	char	src[100] = "";
	char	src2[100] = " ---+--+1234ab567";
	char	src3[100] = "5678VtFQwLApiFWqdJEvFxp_dvsdfza";
	char	src4[100] = "abc1234";
	int		i;

	i = 0;
	i = atoi(src);
	printf("本家:%d\n", i);
	i = ft_atoi(src);
	printf("自作:%d\n", i);
	printf("\n");
	i = atoi(src2);
	printf("本家:%d\n", i);
	i = ft_atoi(src2);
	printf("自作:%d\n", i);
	printf("\n");
	i = atoi(src3);
	printf("本家:%d\n", i);
	i = ft_atoi(src3);
	printf("自作:%d\n", i);
	printf("\n");
	i = atoi(src4);
	printf("本家:%d\n", i);
	i = ft_atoi(src4);
	printf("自作:%d\n", i);
	printf("\n");

	return (0);
}*/