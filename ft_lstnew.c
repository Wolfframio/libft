#include "libft.h"

/*
	Crea un nuevo nodo utilizando malloc(3). 
	La variable miembro ’content’ se inicializa con 
	el contenido del parámetro ’content’. 
	La variable ’next’, con NULL
	
	Parámetros 
	content: el contenido con el que crear el nodo.
	
	Devuelve
	El nuevo nodo
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(*list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
