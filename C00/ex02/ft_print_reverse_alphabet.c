/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:21:41 by kyamagis          #+#    #+#             */
/*   Updated: 2021/12/28 16:24:59 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	abet;

	abet = 'z';
	while (abet >= 'a')
	{
		write(1, &abet, 1);
		abet--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/