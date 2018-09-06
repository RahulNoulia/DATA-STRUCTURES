//  Coder :  Rahul Noulia

// Here i use typedef which means i defined a new name of existing datatype .

#include<stdio.h>
#include<stdlib.h>
 typedef struct node
{
  int data;  struct node *next;
 }x;
 x *front,*rear=NULL;
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
         case 2: del(); break;
         case 3: traverse(); break;  
         case 4: exit(0); break;
       } 
}
           return 0; 
 }
 void add()
 {
     x *c;
     c=(x *)malloc(sizeof(x));
     printf("\n\n Enter Element :");
     scanf("%d",&c->data);   c->next=NULL;
      if(front==NULL)
     {
        front=rear=c;
     }
     else
     {
        rear->next=c;   
          rear=c;
     } 
}
 void del()
 {
    x *c;
    if(front==NULL)
    {
      printf("\n\n Queue is  Empty !!");
      return;
    }

    c=front;   
    front=front->next; 
    free(c);
}
void traverse()
{
   x *a;
   if(front==NULL)
   {
     printf("\n\n Queue is Empty !!");   return;
    
   }
   a=front;
   while(a!=NULL)
   {
      printf("\n%d",a->data);   
      a=a->next;
     
    } }

