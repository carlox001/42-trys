/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czerini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:11:36 by czerini           #+#    #+#             */
/*   Updated: 2023/10/11 16:11:38 by czerini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (1);
}