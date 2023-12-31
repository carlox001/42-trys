/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czerini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:13:44 by czerini           #+#    #+#             */
/*   Updated: 2023/10/11 15:13:49 by czerini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}
