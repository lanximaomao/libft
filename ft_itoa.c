/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:58:47 by lsun              #+#    #+#             */
/*   Updated: 2022/11/08 11:12:10 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit_num(int n)
{
	int	digit;

	digit = 1;
	if (n < 0)
	{
		digit++;
		n = n * (-1);
	}
	while (n / 10 > 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	int		digit;
	int		i;
	char	*str;

	i = 0;
	digit = ft_digit_num(n);
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (!str)
		return (0);
	if (n < 0)
	{
		str[i] = '-';
		i++;
		n = n * (-1);
	}
	while (n >= 10 && digit > 0)
	{
		str[digit - 1] = n % 10 + 48;
		n = n / 10;
		digit--;
	}
	if (n < 10 && i < digit)
		str[digit - 1] = n % 10 + 48;
	return (str);
}