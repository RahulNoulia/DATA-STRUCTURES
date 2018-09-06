//    CODER :  Rahul Noulia

#include<stdio.h>
#include<stdlib.h>
 typedef struct node
{
  int data;
  struct node *link;
}a;
a *start=NULL;
void sort();
void travesre();
void quit();
int main()
{
   int ch,element;
   while(1)
   {
   printf("\n Menu : \n\n 1. Insert \n\n 2. Traverse \n\n 3. quit : \n\n Enter choice :");
   scanf("%d",&ch);
   switch(ch)
   {
      case 1:sort(); break;
      case 2:traverse(); break;
      case 3:exit(0);
   }
   }
   return 0;
   }

// Function for inserting Elements In singly Linked list  ( Elements inserting in sorted form ) 

void sort()
{
  a *p,*q1,*q2;
  p=(a *)malloc(sizeof(a));
  printf("\n Enter element :");
  scanf("%d",&p->data);
  if(start==NULL || start->data>p->data)
  {
    p->link=start;
    start=p;
  }
  else
  {
  q1=start;
  q2=q1->link;
  while(q2!=NULL)
  {
    if(q2->data>p->data)
    {
       break;
    }
    q1=q2;
    q2=q2->link;
  }
  p->link=q2;
  q1->link=p;
}
}
// Funtions for display Elements 

void traverse()
{
  a *s;
  if(start==NULL)
  {
    printf("\n\n Empty !!");
    return;
  }
  s=start;
  while(s!=NULL)
  {
  printf("\n%d",s->data);
  s=s->link;
  }
}

