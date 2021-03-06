/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlux <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:30:41 by tlux              #+#    #+#             */
/*   Updated: 2018/03/02 17:40:53 by tlux             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/asm.h"

t_label	*ft_labelnew(char *str, int octet)
{
	t_label *node;

	if (!(node = (t_label *)malloc(sizeof(*node))))
		return (0);
	node->label = ft_strdup(str);
	node->octet = octet;
	node->next = NULL;
	return (node);
}
