/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icuz <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 19:08:30 by icuz              #+#    #+#             */
/*   Updated: 2017/03/07 19:22:23 by icuz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int nb;

	i = 0;
	sign = 0;
	nb = 0;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\v' ||
		str[i] == '\f' || str[i] == '\r' || str[i] == '\n')
		i++;
	if (str[i] == '-')
		sign++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + (str[i++] - '0');
	if (sign == 1)
		return (-nb);
	if (sign >= 1)
		return (0);
	else
		return (nb);
}
