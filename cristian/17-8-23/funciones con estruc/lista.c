#include "cristian.h"

int insertarini (nodo_t ** inicio, dato_t d )
{
		nodo_t* aux;
		aux=(nodo_t*)malloc (sizeof(nodo_t));
		if(aux==NULL)return -1;
		aux->next=NULL;
		aux->dato.a=d.a;
		aux->next= *inicio;
		*inicio=aux;
		return 0;
} 
 
int insertarfin (nodo_t ** inicio, dato_t d)
{
		nodo_t* aux, *aux2;
		aux=(nodo_t*)malloc (sizeof(nodo_t));
		if(aux==NULL)return -1;
		aux->next=NULL;
		aux->dato.a=d.a;
		if(*inicio==NULL)
		{
			*inicio=aux;
			return 1;
		}
		for(aux2=*inicio;aux2->next!=NULL;aux2=aux2->next);
		aux2->next=aux;
	    return 0;

} 
 
void imprimir (nodo_t *i)
{
	while (i!=NULL)
	{
		printf("dato %d \n",i->dato.a);
		i=i->next;
	}
	return;
} 


nodo_t* busqueda (nodo_t *i, dato_t d)
{
	nodo_t* buscado;
	while (i!=NULL)
		{
		if(i->dato.a==d.a)
			{			
				buscado=i;
				return buscado;
			}
		i=i->next;
		}
	return i;
}

void liberartoda (nodo_t ** h)
{
	nodo_t* aux;
	while (*h!=NULL)
	{
		aux=*h;
		*h=aux->next;
		free(aux);
	}
	return;
}

int eliminar (nodo_t ** h, dato_t d)
{
	nodo_t* j,*i;
	if(*h==NULL)return -1;
	if((*h)->dato.a == d.a)
	{
		i=*h;
		*h=i->next;
		free(i);
	}
	j=*h;
	i=(*h)->next;
	while (i!=NULL && i->dato.a!=d.a)
		{	
			j=i;
			i=i->next;
		}
	if(i!=NULL)
	{
		j->next=i->next;
		free(i);
	}

	return 0;
}

int insetarorden (nodo_t **h, dato_t d)
{
		nodo_t* aux, *j,*i;
		aux=(nodo_t*)malloc (sizeof(nodo_t));
		if(aux==NULL)return -1;
		aux->dato.a=d.a;
		if(*h==NULL)
		{
			*h=aux;
			aux->next=NULL;
			return (0);
		}
		if((*h)->dato.a >= aux->dato.a)
		{
			aux->next=*h;
			*h=aux;
			return (0);
		}
		j=*h;
		i=(*h)->next;
		while (i!=NULL && i->dato.a <= aux->dato.a)
		{	
			j=i;
			i=i->next;
		}
		if(i==NULL)
		{
			j->next=aux;
			aux->next=NULL;
		}else
		{	
			j->next=aux;
			aux->next=i;
		}
		return 0;
}