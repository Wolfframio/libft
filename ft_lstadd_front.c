#include "libft.h"

/*
	Añade el nodo ’new’ al principio de la lista ’lst’.
	
	Parámetros 
	lst: la dirección de un puntero al primer nodo de una lista.
	new: un puntero al nodo que añadir al principio de la lista.
	
	Valor devuelto Nada
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{	
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
