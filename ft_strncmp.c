/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurobert <jurobert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:07:37 by jurobert          #+#    #+#             */
/*   Updated: 2021/08/31 14:20:14 by jurobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	/*if (ft_memcmp(s1, s2, len) < 0)
		return (-1);
	else if (ft_memcmp(s1, s2, len) > 0)
		return (1);
	else
		return (0);*/

	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (len-- && str1[len])
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
