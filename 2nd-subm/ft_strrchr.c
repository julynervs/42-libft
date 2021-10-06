/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurobert <jurobert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:11:20 by jurobert          #+#    #+#             */
/*   Updated: 2021/10/06 19:34:50 by jurobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			len;
	unsigned char	cc;

	cc = (unsigned char)c;
	len = ft_strlen(s) + 1;
	while (len--)
	{
		if (s[len] == cc)
			return ((char *)s + len);
	}
	return (0);
}
