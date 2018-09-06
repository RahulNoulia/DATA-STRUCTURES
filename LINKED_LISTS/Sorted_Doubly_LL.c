//   CODER : Rahul Noulia

// Here i use typedef which means i defined a new name of existing datatype .

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;   struct node *link,*prev;
}a;
a *start=NULL;
void sort();  
void traverse();
 void quit(); 
int main()
{
   int c;  
   while(1)
{
printf("\n\n SORTED DOUBLY LINKED LIST : \n\n 1. Insert Element \n\n 2. Traverse \n\n 3. Quit \n\n Enter Choice :");
scanf("%d",&c);   
switch(c)
{
case 1:sort(); break; 
case 2:traverse(); break;
case 3:exit(0); 
}
}
return 0; 
}
 // Function for Inserting Elements in Sorted form
	void sort()
	{
	   a *t,*p1,*p2;
	   t=(a *)malloc(sizeof(a));
	   printf("\n\n Enter Element :");
	   scanf("%d",&t->data);
	   if(start==NULL)
	{
	t->link=NULL;  
        t->prev=NULL; 
        start=t;
	}
	else if(start->data>t->data)
	{
	t->link=start; 
	start->prev=t; 
	t->prev=NULL;  
	start=t;
	}
	else
	{
	p1=start;  
	p2=p1->link;
	while(p2!=NULL)
	{
	if(p2->data>t->data)
	{
	   break;
	}
	p1=p2;  p2=p2->link; 
	}
	t->link=p2;
	 if (p2!=NULL)
	{
	p2->prev=t;
	}  
	p1->link=t; 
	t->prev=p1; 
	}
	}
	
//    Function for traversing 
       void traverse()
	{
	a *q;
	if(start==NULL)
	{
	printf("\n\n Empty !!"); 
	return;
	}
	q=start;
	while(q!=NULL) 
	{ 
	printf("\n%d",q->data); 
	 q=q->link;}
	}


