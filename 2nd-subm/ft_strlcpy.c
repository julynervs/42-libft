/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurobert <jurobert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:24:54 by jurobert          #+#    #+#             */
/*   Updated: 2021/10/05 12:25:09 by jurobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(src);
	if (size <= 0)
		return (len);
	else if (len + 1 < size)
		ft_memmove(dst, src, len + 1);
	else if (len + 1 >= size)
	{
		ft_memmove(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (len);
}
