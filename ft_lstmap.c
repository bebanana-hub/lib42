/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:23:58 by vgalloni          #+#    #+#             */
/*   Updated: 2024/10/23 17:22:31 by vgalloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
// void *double_content(void *content);
// void del(void *content);
// void	ft_lstadd_back(t_list **lst, t_list *new);
// t_list	*ft_lstnew(void *content);
// int	ft_lstsize(t_list *lst);

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*new_node;
	t_list	*temp;

	newlst = NULL;
	while (lst)
	{
		new_node = (t_list *)malloc(sizeof(t_list));
		if (!new_node)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		new_node->next = NULL;
		if (!newlst)
			newlst = new_node;
		else
			temp->next = new_node;
		temp = new_node;
		lst = lst->next;
	}
	return (newlst);
}

// void *double_content(void *content) {
//     int *new_content = malloc(sizeof(int));
//     if (!new_content) return NULL;
//     *new_content = *(int *)content * 2;
//     return new_content;
// }

// void del(void *content) {
//     free(content);
// }

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*last;

// 	if (!new)
// 		return ;
// 	if (!*lst)
// 		*lst = new;
// 	else
// 	{
// 		last = *lst;
// 		while (last->next != NULL)
// 		{
// 			last = last->next;
// 		}
// 		last->next = new;
// 	}
// }

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new_node;

// 	new_node = (t_list *)malloc(sizeof(t_list));
// 	if (!new_node)
// 		return (NULL);
// 	new_node->content = content;
// 	new_node->next = NULL;
// 	return (new_node);
// }

// int	ft_lstsize(t_list *lst)
// {
// 	int	i;

// 	i = 0;
// 	while (lst != NULL)
// 	{
// 		i++;
// 		lst = lst->next;
// 	}
// 	return (i);
// }

// t_list	*ft_lstlast(t_list *lst)
// {
// 	while (lst && lst->next != NULL)
// 	{
// 		lst = lst->next;
// 	}
// 	return (lst);
// }

// int main()
// {
//     t_list *list = NULL;
//     int *value;

//     // Création de la liste
//     for (int i = 1; i <= 5; i++) {
//         value = malloc(sizeof(int));
//         *value = i;
//         ft_lstadd_back(&list, ft_lstnew(value));
//     }

//     printf("size :%d\n", ft_lstsize(list));

//     // Affichage de la liste originale
//     printf("Liste originale : ");
//     for (t_list *temp = list; temp; temp = temp->next) {
//         printf("%d -> ", *(int *)temp->content);
//     }
//     printf("NULL\n");

//     // Transformation de la liste
//     t_list *new_list = ft_lstmap(list, double_content, del);

//     // Affichage de la nouvelle liste
//     printf("Nouvelle liste : ");
//     for (t_list *temp = new_list; temp; temp = temp->next) {
//         printf("%d -> ", *(int *)temp->content);
//     }
//     printf("NULL\n");

//     t_list *last_node = ft_lstlast(new_list);
// 	if (last_node) 
// 	{
//     	printf("last chain :%d\n", *(int *)last_node->content);
// 	} 
// 	else 
// 	{
//     printf("La liste est vide.\n");
// 	}

//     // Nettoyage
//     ft_lstclear(&list, del);
//     ft_lstclear(&new_list, del);

//     return 0;
// }
