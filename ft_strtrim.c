/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurobert <jurobert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 20:23:36 by jurobert          #+#    #+#             */
/*   Updated: 2021/09/03 22:39:22 by jurobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	start = 0;
	if (!s1)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]) != (void *)0)
		start++;
	len = ft_strlen(s1 + start);
	if (len)
	{
		while (len && ft_strchr(set, s1[len + start - 1]) != (void *)0)
			len--;
	}
	return (ft_substr(s1, start, len));
}
