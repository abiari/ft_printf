/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 01:48:40 by abiari            #+#    #+#             */
/*   Updated: 2019/11/20 01:48:44 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_lenu(unsigned int a)
{
	int	i;

	i = 0;
	if (a == 0)
		return (1);
	while (a > 0)
	{
		a /= 10;
		i++;
	}
	return (i);
}
