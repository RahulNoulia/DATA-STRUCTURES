// CODER : Rahul Noulia

// Here i use typedef which means i defined a new name of existing datatype .

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;  
    struct node *link;
    
}x;
x *top=NULL;
void push();  
void pop();  
void traverse();  
void quit();
int main()
{
    int ch;  
    while(1)
    {
        printf("\n\n MENU : \n\n 1 . PUSH  \n\n 2 . POP  \n\n 3 . Traverse  \n\n 4 .  Quit  \n\n Enter choice :  ");
        scanf("%d",&ch);
        switch(ch)
        {
           case 1: push(); break;  
           case 2: pop();  break;
           case 3: traverse();  break; 
           case 4: exit(0); break;
        } 
}   
 return 0;
 }
void push()
{
    x *c;
    c=(x *)malloc(sizeof(x));
     printf("\n\n Enter element : ");
     scanf("%d",&c->data);
       c->link=top;   
        top=c;
}
void pop()
{
  x *c;
  if(top==NULL)
  {
   printf("\n\n Stack is empty !!");    
   return;
  }
    c=top;   
    top=top->link;   
    free(c);   
}
void traverse()
{
   x *c;
   if(top==NULL)
   {
    printf("\n\n Stack is empty !!");  
    return;
   }
   c=top;
   while(c!=NULL)
   {
     printf("\n%d",c->data); 
     c=c->link;
   }  
}
