/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 14:07:22 by tpan              #+#    #+#             */
/*   Updated: 2016/11/16 07:57:28 by tpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *str)
{
	char *start;

	start = (char *)str;
	while (*str != 0)
	{
		str++;
	}
	return (str - start);
}
