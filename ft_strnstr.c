/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icuz <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 04:29:22 by icuz              #+#    #+#             */
/*   Updated: 2017/03/21 06:34:54 by icuz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *little, size_t len)
{
	if (!*big && !*little)
		return ("");
	while (*big)
	{
		if (len < ft_strlen(little))
			break ;
		if (ft_strlen(big) < ft_strlen(little))
			break ;
		if (ft_memcmp(big, little, ft_strlen(little)) == 0)
			return ((char *)big);
		len--;
		big++;
	}
	return (NULL);
}
