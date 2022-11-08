/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:22:47 by lsun              #+#    #+#             */
/*   Updated: 2022/11/07 10:49:33 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	len;

	if(!s || !*s)
		return;
	i = 0;
	len = ft_strlen((const char*)s);
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}