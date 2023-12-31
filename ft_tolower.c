/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:26:59 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/22 15:56:33 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define TOLOWER 32

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + TOLOWER;
	return (c);
}
