/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:21:32 by ayassir           #+#    #+#             */
/*   Updated: 2021/12/19 12:40:10 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *str)
{
	int					rt;
	long long			i;

	rt = 0;
	i = (long long) str;
	if (!str)
		rt += ft_putstr("0x0");
	else
	{
		rt += ft_putstr("0x");
		rt += ft_puthex(i);
	}
	return (rt);
}
