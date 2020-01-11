#include "libft.h"
#include <stdio.h>

void	del(void *target);
void	f(void *content);
void	*f2(void *content);
void	del2(void *target);

void	del(void *target)  // Clear char *
{
	char	*ptr;

	ptr = (char *)target;
	while (*ptr)
		*ptr++ = '\0';
}

void	f(void *target) // (int)content++
{
	int		*ptr;

	ptr = (int *)target;
	*ptr = (int)(*ptr) + 1;
}

void	*f2(void *content) // strtoupper
{
	char	*ptr;
	void	*ret;

	ptr = (char *)content;
	ret = ptr;
	while (*ptr)
	{
		if (*ptr > 96 && *ptr < 123)
		{
			*ptr = (char)(*ptr) - 32;
		}
		ptr++;
	}
	return (ret);
}

void	del2(void *target)
{
	t_list	*ptr;

	ptr = (t_list *)target;
	del(&ptr->content);
	free(ptr->content);
}

int		main(void)
{

/*
	t_list	**head;
	t_list	*link;
	char	*str = "Coucou";

	link = NULL;
	head = &link;
	link = ft_lstnew(str);
	while (*head)
	{
		dprintf(1, "head->content : %s\n", (*head)->content);
		*head = (*head)->next;
	}

*/
/*
	t_list	suis;
	t_list	une;
	t_list	liste;
	t_list	je;
	t_list	*alst;
	t_list	*new;

	suis.content = "suis";
	suis.next = &une;
	une.content = "une";
	une.next = &liste;
	liste.content = "liste";
	liste.next = NULL;
	je.content = "je";
	je.next = NULL;
	alst = &suis;
	new = &je;
	ft_lstadd_front(&alst, new);
	while (alst)
	{
		dprintf(1, "content: %s\n", alst->content);
		alst = alst->next;
	}
*/

	
#define NBR 7

	t_list	*head;
	t_list	*new;
	int		i;
	int		*ptr;

	ptr = &i;
	head = NULL;
	i = 0;
	while (i++ < NBR)
	{
	//dprintf(1, "i : %d\n", *ptr);
		new = ft_lstnew(&ptr);
		if (!head)
		{
			head = new;
		}
		else
		{
			new->next = head;
			head = new;
		}
	}
	i = 0;
	i = ft_lstsize(head);
	dprintf(1, "lst size: %d\n", i);


/*
	t_list	je;
	t_list	suis;
	t_list	une;
	t_list	liste;
	t_list	POINT;
	t_list	*lst;
	t_list	*der;

	lst = &je;
	je.content = "je";
	je.next = &suis;
	suis.content = "suis";
	suis.next = &une;
	une.content = "une";
	une.next = &liste;
	liste.content = "liste";
	liste.next = &POINT;
	POINT.content = "POINT";
	POINT.next = NULL;
	der = ft_lstlast(lst);
	dprintf(1, "last link : %s\n", (char *)der->content);
*/

/*	
	t_list	je;
	t_list	suis;
	t_list	une;
	t_list	liste;
	t_list	POINT;
	t_list	*ptr;
	t_list	*head;

	head = &je;
	ptr = &POINT;
	je.content = "je";
	je.next = &suis;
	suis.content = "suis";
	suis.next = &une;
	une.content = "une";
	une.next = &liste;
	liste.content = "liste";
	liste.next = NULL;
	POINT.content = "POINT";
	POINT.next = NULL;
	ft_lstadd_back(&head, ptr);
	while (head)
	{
		dprintf(1, "head->content : %s\n", head->content);
		head = head->next;
	}
*/

/*
	t_list	je;
	t_list	suis;
	t_list	une;
	t_list	liste;
	t_list	POINT;
	t_list	*ptr;
	t_list	*head;

	head = &je;
	je.content = "je";
	je.next = &suis;
	suis.content = "suis";
	suis.next = &une;
	une.content = "une";
	une.next = &liste;
	liste.content = "liste";
	liste.next = &POINT;
	POINT.content = "POINT";
	POINT.next = NULL;
	ptr = &une;
	ft_lstdelone(ptr, (*del));
	while (head)
	{
		dprintf(1, "head->content : %s\n", head->content);
		head = head->next;
	}
*/


/*#define TARGET 1 
	
	char	*tab[] = {"POINT", "liste", "une", "suis", "je", NULL};
	t_list	*new = NULL;
	t_list	*ptri = NULL;
	t_list	*head;
	int		i;

	head = NULL;
	i = 0;
	while (tab[i])
	{
		new = ft_lstnew(tab[i]);
		if (!head)
			head = new;
		else
		{
			new->next = head;
			head = new;
		}
		i++;
	}
	i = 0;
	ptri = head;
	while (i <= TARGET - 1 && i < 6) 
	{
		if (head->next)
			head = head->next;
		i++;
	}
	ft_lstclear(&head->next, (*del));
	head->next = NULL;
	head = ptri;
	while (head)
	{
		printf("head->content : %s\n", (char *)head->content);
		head = head->next;
	}
	while (ptri)
	{
		ptri->content = NULL;
		head = ptri;
		ptri = ptri->next;
		head->next = NULL;
		free(head);
	}

*/
/*
	t_list	link1;
	t_list	link2;
	t_list	link3;
	t_list	link4;
	t_list	*ptr;

	ptr = &link1;
	link1.content = (void *)1;
	link1.next = &link2;
	link2.content = (void *)2;
	link2.next = &link3;
	link3.content = (void *)3;
	link3.next = &link4;
	link4.content = (void *)4;
	link4.next = NULL;

	ft_lstiter(ptr, (*f));

	while (ptr)
	{
		dprintf(1, "ptr->content: %d\n", (int)ptr->content);
		ptr = ptr->next;
	}
*/

/*
	t_list	je;
	t_list	suis;
	t_list	une;
	t_list	liste;
	t_list	POINT;
	t_list	*head;
	t_list	*ret;
	t_list	*ptr;
	char	*str = "je";
	char	*str2 = "suis";
	char	*str3 = "une";
	char	*str4 = "liste";
	char	*str5 = "POINT";

//
** Pur simuler une erreur de malloc et declencher le nettoyagde de la liste,
** declarer un int i dans ft_lstmap() et ajouter comme condition
** i == x || ... (où x est une valeur plus petite que le nombre d'éléments de
** la liste) dans le "if (!(ptr = ft_lstnew(f(lst->content))))"
** donc; "if (i == 2 || !(ptr = ft_lstnew(f(lst->content))))" par exemple.
//

	head = &je;
	je.content = ft_strdup(str);
	je.next = &suis;
	suis.content = ft_strdup(str2);
	suis.next = &une;
	une.content = ft_strdup(str3);
	une.next = &liste;
	liste.content = ft_strdup(str4);;
	liste.next = &POINT;
	POINT.content = ft_strdup(str5);;
	POINT.next = NULL;
	ret = ft_lstmap(head, (*f2), (*del2));
	if (ret)
	{
		while (ret)
		{
			dprintf(1,"ret : %s\n", ret->content);
			ptr = ret;
			ret = ret->next;
			free(ptr->content);
			ptr->content = NULL;
			free(ptr);
		}
	}
	else
	{
		ret = head;
		while (head)
		{
			ret = ret->next;
			free(head->content);
			head->next = NULL;
			head = ret;
		}
	}
	return (0);
*/
}
