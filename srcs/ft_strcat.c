/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:20:42 by jjaniec           #+#    #+#             */
/*   Updated: 2018/02/01 12:18:47 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int		i;
	int		j;

	i = -1;
	j = -1;
	while (s1[++i] != '\0')
		;
	while (s2[++j] != '\0')
		s1[i++] = s2[j];
	s1[i] = '\0';
	return (s1);
}
