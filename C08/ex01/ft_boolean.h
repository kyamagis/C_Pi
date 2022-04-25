/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 05:59:54 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/06 06:50:07 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

/* Message */
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
/* Return value */
# define SUCCESS	(0)
# define TRUE		(0)
# define FALSE 		(1)
/* Macro */
# define EVEN(x)	(x % 2 == 0)

typedef int	t_bool;

#endif
