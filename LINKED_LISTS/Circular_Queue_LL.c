// CODER : Rahul Noulia

// Here i use typedef which means i defined a new name of existing datatype .

#include<stdio.h>
#include<stdlib.h>
 typedef struct node
{
  int data;  
  struct node *next;
 }q;
 q *front,*rear=NULL;
void add();  
void del();  
void traverse();  
void quit();
 int main()
 {
     int ch; 
    while(1)
   {
      printf("\n\n MENU : \n\n ADD : 1 \n\n DEL : 2 \n\n Traverse : 3 \n\n quit : 4 \n\n Enter choice : ");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1: add(); break;  
          case 2: del();break;
          case 3: traverse(); break;  
          case 4: exit(0); break;
    }
    }
           return 0;
 }
 void add()
 {
     q *c;
     c=(q *)malloc(sizeof(q));
     printf("\n\n Enter Element :");
     scanf("%d",&c->data);
     if(front==NULL)
     {
        front=rear=c;   
       c->next=front;
    }
     else
     {
        rear->next=c;    
       rear=c;  
        rear->next=front;
      }
 }
 void del()
 {
    q *c;
    if(front==NULL)
    {
      printf("\n Circular queue is Empty !!");return;
    }
    
    if(front->next==front)
    {
       front=NULL;
    }
    else{
	c=front; 
        front=front->next;  
        rear->next=front;
}
    free(c);  }
void traverse()
{
   q *a;
   if(front==NULL)
   {
     printf("\n Circular queue is Empty !!"); return;
    }
   a=front;
   do
   {
      printf("\n%d",a->data);   
       a=a->next;
     }while(a!=front); 
}

