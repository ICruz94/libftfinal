/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icuz <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 07:09:19 by icuz              #+#    #+#             */
/*   Updated: 2017/03/21 07:16:11 by icuz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *big, char const *little)
{
	if (!*big && !*little)
		return ((char *)big);
	else if (!*big)
		return (NULL);
	while (*big)
	{
		if (ft_memcmp(big, little, ft_strlen(little)) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
