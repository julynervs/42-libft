/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurobert <jurobert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:08:10 by jurobert          #+#    #+#             */
/*   Updated: 2021/09/26 21:03:41 by jurobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	num;
	int		sign;

	sign = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 15))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	num = 0;
	while ('9' >= *nptr && *nptr >= '0')
	{
		num *= 10;
		num += sign * (*nptr - '0');
		nptr++;
	}
	if (!ft_isdigit(*nptr))
		return (num);
	return (0);
}
