/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/23 19:32:35 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/23 20:49:10 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main(int argc, char const *argv[])
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	node1 ->content = ;
// 	node2;
// 	node3;
// 	node1 ->next = node2;
// 	node2 ->next = node3;

// 	return (0);
// }
