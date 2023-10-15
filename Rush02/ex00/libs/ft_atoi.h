/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czerini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:58:04 by czerini           #+#    #+#             */
/*   Updated: 2023/09/24 18:58:07 by czerini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_ATOI_H 
# define FT_ATOI_H

int	is_a_number(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

void	add_number(char *str, int *res)
{
	while (is_a_number(*str))
	{
		if (*res == 0)
		{
			*res = (*str - '0');
		}
		else
		{
			*res = *res * 10 + (*str - '0');
		}
		str++;
	}
}

int	ft_atoi(char *str)
{
	unsigned int	minus_counter;
	int				res;

	res = 0;
	minus_counter = 0;
	while (*str != '\0')
	{
		if (*str == '-')
		{
			minus_counter++;
		}
		if (is_a_number(*str))
		{
			add_number(str, &res);
			break ;
		}
		str++;
	}
	if ((minus_counter % 2) != 0)
	{
		res = -res;
	}
	return (res);
}

#endif
