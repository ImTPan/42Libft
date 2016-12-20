/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 12:00:38 by tpan              #+#    #+#             */
/*   Updated: 2016/12/19 16:01:54 by tpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		k;
	char	**wl;

	if (!s ||
	!(wl = (char **)malloc(sizeof(char *) * (ft_wordcount((char *)s, c) + 1))))
		return (NULL);
	i = 0;
	k = 0;
	while (k < ft_wordcount((char *)s, c))
	{
		while (s[i] == c)
			i++;
		wl[k] = (char *)malloc(sizeof(char *) *
				(ft_wordlength((char *)&s[i], 1, c) + 1));
		if (!wl[k])
			return (NULL);
		ft_strncpy(wl[k], &s[i], ft_wordlength((char *)&s[i], 1, c));
		wl[k][(ft_wordlength((char *)&s[i], 1, c))] = '\0';
		while (s[i] != c && s[i] != '\0')
			i++;
		k++;
	}
	wl[k] = NULL;
	return (wl);
}
