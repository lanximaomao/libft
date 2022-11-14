/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:15:54 by linlinsun         #+#    #+#             */
/*   Updated: 2022/11/14 20:16:42 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst->next)
		ft_lstclear(&lst->next, del);
	del(lst->content);
	free(lst);
}

//int	main(void)
//{
//	t_list	*n0;
//	t_list	*n1;
//	t_list	*n2;
//	t_list	*n3;
//	t_list	*n4;

//	n0 = ft_lstnew("zero");
//	n1 = ft_lstnew("one");
//	n2 = ft_lstnew("two");
//	n3 = ft_lstnew("three");
//	n4 = ft_lstnew("four");
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = NULL;
//	ft_lstadd_front(&n1, n0);
//	ft_lstadd_back(&n0, n4);
//	printf("%s\n", n4->content);
//	return (0);
//}
