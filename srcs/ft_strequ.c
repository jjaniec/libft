/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:08:57 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/20 20:37:08 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;

	i = 0;
	if (!(s1) || !(s2))
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((s1[i] == s2[i]) ? (1) : (0));
}
