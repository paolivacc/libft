/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:17:16 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/22 15:56:29 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define TOUPPER 32

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - TOUPPER;
	return (c);
}