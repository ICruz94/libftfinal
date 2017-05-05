/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icuz <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 12:28:46 by icuz              #+#    #+#             */
/*   Updated: 2017/04/27 12:28:46 by icuz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*setstring(char *string, const char *s, int i, int k)
{
	int iter;

	iter = 0;
	while (i < k)
	{
		string[iter] = s[i];
		i++;
		iter++;
	}
	return (string);
}

char			*ft_strtrim(const char *s)
{
	int		i;
	int		iter;
	int		k;
	char	*string;

	i = 0;
	iter = 0;
	if (!s)
		return (NULL);
	k = ft_strlen((char*)s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strdup(s + i));
	while (s[k - 1] == ' ' || s[k - 1] == '\n' || s[k - 1] == '\t')
		k--;
	string = malloc(sizeof(char) * (k - i) + 1);
	if (!string)
		return (NULL);
	string[k - i] = '\0';
	return (setstring(string, s, i, k));
}
