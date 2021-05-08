/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnakahod <jnakahod@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:22:31 by jnakahod          #+#    #+#             */
/*   Updated: 2021/05/08 21:17:25 by jnakahod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_set(char **dst, char *src)
{
	free(*dst);
	*dst = src;
}

void	ft_free_all(char **src)
{
	int		i;

	if (!src)
		return ;
	i = 0;
	while (src[i])
		free(src[i++]);
	free(src);
}
