/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:00:32 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/08 18:50:40 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

int	 main()
{
	char tab[5] = "abcde";
	char tab2[5] = "zwcrr";

	ft_memccpy(tab, tab2, 'c', 5);
	printf("%s", tab);
}
