/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlength.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:02:45 by tpan              #+#    #+#             */
/*   Updated: 2016/12/16 14:13:25 by tpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordlength(char *str,int i, char delimiter)
{
	size_t len;

	len = 0;
	while (str[i] != '\0' && str[i] != delimiter)
		i++;
		len++;
	return (i);
}
