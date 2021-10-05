/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurobert <jurobert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 17:33:19 by jurobert          #+#    #+#             */
/*   Updated: 2021/10/05 12:22:51 by jurobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_len;
	size_t	sub_len;

	if (str)
	{
		str_len = ft_strlen(str);
		sub_len = len;
		if (start >= str_len)
			return (ft_strdup(""));
		else if (start + len >= str_len)
			sub_len = str_len - start;
		substr = ft_calloc(sub_len + 1, sizeof(char));
		if (!substr)
			return (NULL);
		ft_strlcpy(substr, (str + start), sub_len + 1);
		return (substr);
	}
	return (NULL);
}
