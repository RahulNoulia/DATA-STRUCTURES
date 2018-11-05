//  Coder :  Rahul Noulia


#include<stdio.h>
#include<stdlib.h>
#define max 5
void add(int *,int,int *,int *);
void del(int *,int,int *,int *);
void display(int *,int *,int *);
int main()
{
	int queue[max],front=-1,rear=-1,i, choice;
      while (1)
	{
		printf("\n\nMENU  \n\n 1 . Add   \n\n 2 . Delete \n\n 3 . Display  \n\n 4 . Quit ");
                printf("\nEnter your choice =");
		switch(choice)
		{
              case 1:    display(queue,&front,&rear);
	                 break;

	
	      case 2:  	 add(queue,max,&front,&rear,element);
	                 break;
              case 3:
		         del(queue,max,&front,&rear);
	                 break;
              case 4:  exit(0);
		}
	}
	return 0;
}
void add(int *p,int l,int *f,int *r)
{
   int element;
   if(*r==l-1)
   {
      printf("\nQueue is full");
      return;
   }
   if(*f==-1)
   {
      *f=0;
      *r=0;
   }
   else
   {
     (*r)++;
   }
   printf("\nEnter element -> ");
   scanf("%d",&element);
   p[*r]=element;
}
void del(int *p,int l,int *f,int *r)
{
  int temp;
  if(*f==-1)
  {
    printf("\nqueue is empty");
    return;
  }
  temp=p[*f];
  if(*f==*r)
  {
   *f=-1;
   *r=-1;
  }
  else
  {
  (*f)++;
  }
}
void display(int *p,int *front,int *rear)
{
   int i;
   if(*front==-1)
   {
      printf("empty");
      return;
   }
   else
   {
      for(i=*front;i<=*rear;i++)
      {
        printf("\n%d",p[i]);
      }
   }
}

