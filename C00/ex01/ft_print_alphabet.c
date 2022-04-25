/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:21:41 by kyamagis          #+#    #+#             */
/*   Updated: 2021/12/28 16:23:19 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	abet;

	abet = 'a';
	while (abet <= 'z')
	{
		write(1, &abet, 1);
		abet++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/