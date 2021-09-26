/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurobert <jurobert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:25:16 by jurobert          #+#    #+#             */
/*   Updated: 2021/09/26 18:34:37 by jurobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	unsigned int	num;

	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	while (num >= 10)
		ft_putnbr_fd(num % 10, fd);
	ft_putnbr_fd(num / 10, fd);
}
