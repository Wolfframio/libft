/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:28:47 by imontero          #+#    #+#             */
/*   Updated: 2023/05/02 10:28:49 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int main(void)
{
    t_list  *lista;
    t_list  *lista1;
    t_list  *lista2;
    t_list  *last;
    char    str[] = "final";


    lista = malloc(sizeof(*lista));
    lista1 = malloc(sizeof(*lista1));
    lista2= malloc(sizeof(*lista2));
    last= malloc(sizeof(*last));


    lista->next = lista1;
    lista1->next = lista2;
    lista2->content = (void *)str;
    lista2->next = NULL;


    last = ft_lstlast(lista);
    printf("El ultimo nodo de la lista contiene: %s\n", ((char *)last->content));


    free(lista);
    free(lista1);
    free(lista2);
    free(last);
    return (0);
}
*/