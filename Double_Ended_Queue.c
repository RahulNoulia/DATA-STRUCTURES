//  Coder :  Rahul Noulia


#define MAX 5
#include<stdio.h>
#include<stdlib.h>
void addrear(int*,int,int*,int*);
void addfront(int*,int,int*,int*);
void delfront(int*,int,int*,int*);
void delrear(int*,int,int*,int*);
void traverse(int*,int,int*,int*);
int main()
{
  int queue[MAX],ch,a,b,x=MAX; int front=-1,rear=-1;
  while(1)
  {   b:
    printf("\nMENU\n");
    printf("\n 1.INPUT RESTRICTED DEQUEUE \n\n 2.OUTPUT RESTRICTED DEQUEUE \n\n 3.QUIT \n\n Enter Choice :");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 :  while(1)
                {
               printf("\n MENU \n 5 . Add from rear end \n\n 6 . Delete from front end\n\n 7 . Delete from rear end\n\n 8. Traverse\n\n 9. Quit\n  \nEnter Choice :");
               scanf("%d",&a);
                switch(a)
                {
                 case 5 : addrear(queue,x,&front,&rear);
                          break;
                 case 6 : delfront(queue,x,&front,&rear);
                          break;
                 case 7 : delrear(queue,x,&front,&rear);
                          break;
                 case 8 : printf("\n");
                          traverse(queue,x,&front,&rear);
                          printf("\n");
                          break;
                 case 9 : goto b;
                          break;
                 default : printf("\n Wrong Choice ! Try Again");
               }
			   }
                   break;
      case 2 : while(1)
               {
               printf("\nMENU\n10.Add from rear end\n11.Add from front end\n12.Delete from front end\n13.Traverse\n14.Quit\nEnter Choice :");
               scanf("%d",&b);

               switch(b)
               {
                 case 10 : addrear(queue,x,&front,&rear);
                          break;
                 case 11 : addfront(queue,x,&front,&rear);
                          break;
                 case 12 : delfront(queue,x,&front,&rear);
                          break;
                 case 13 : printf("\n");
                          traverse(queue,x,&front,&rear);
                          break;
                 case 14 : goto b;
                          break;
                 default : printf(" \nWrong Choice ! Try Again");
               }
			   }
               break;
      case 3 : exit(0);

      default : printf("Oops! Wrong choice, try again");

    }
  }
  return 0;
}
void addrear(int* queue,int x,int* front,int* rear)
{
  int item;
  if(((*front==0)&&(*rear==x-1))||(*front==*rear+1))
  {
    printf("\n Queue is full!Overflow ");
  }
  else
    {
      if(*front==-1)
      {
       *front=0;
       *rear=0;
       }
       else if(*rear==x-1)
       {
         *rear=0;
       }
       else
       {
       *rear=*rear+1;
       }
       printf("\nEnter Item :");
       scanf("%d",&item);
       queue[*rear]=item;
     }}
void delfront(int* queue,int x,int* front,int* rear)
{
  int temp;
  if(*front==-1)
  {
    printf(" \n Queue is empty!Underflow");
  }
  else
    {
        temp=queue[*rear];
       if(*front==*rear)
        {

         *front=0;
         *rear=0;
        }
    else if(*front==x-1)
    {
      (*front)=0;
    }
    *front=*front+1;
}

}

void addfront(int* queue,int x,int* front,int* rear)
{
  int item;
  if(((*front==0)&&(*rear==x-1))||(*front==*rear+1))
  {
    printf("Queue is full ! ");
  }
  else
    {
      if(*front==-1)
      {
       *front=0;
       *rear=0;
       }
       else if(*front==0)
       {
         *front=x-1;
       }
       *front=*front-1;


       printf("\n Enter Item :");
       scanf("%d",&item);
       queue[*front]=item;
     }}

void delrear(int* queue,int x,int* front,int* rear)
{
  int temp;
  if(*front==-1)
  {
    printf(" \n Queue is empty!Underflow");
  }
  else
    {
        temp=queue[*rear];
       if(*front==*rear)
        {

         *front=0;
         *rear=0;
        }
    else if(*rear==0)
    {
      (*rear)=x-1;
    }
    *rear=*rear-1;
}

}
void traverse(int* queue,int x,int* front,int* rear)
{
  int i;
  if(*front==-1)
  {
   printf("\n Que is empty !");
  }
  else
  {
  printf("\n Elements in the queue at present :\n");

    if(*rear>=*front)
    {
      for(i=*front;i<=*rear;i++)
      {
        printf("\n%d",queue[i]);
   }   }
    else
    {
      for(i=*front;i<=x-1;i++)
      {
        printf("\n%d",queue[i]);
      }
      for(i=0;i<=*rear;i++)
      {
        printf("\n%d",queue[i]);
      }
    }
 } 
 }

