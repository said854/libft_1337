/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:50:49 by sjoukni           #+#    #+#             */
/*   Updated: 2024/10/22 11:53:02 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}

static	int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	ft_isnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
