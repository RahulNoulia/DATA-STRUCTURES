//  Coder :  Rahul Noulia


#include<stdio.h>
#include<stdlib.h>
#define max 5
void addrear(int *,int,int *,int *);
void delfront(int *,int,int *,int *);
void display(int *,int,int *,int *);
void quit();
int main()
{
	int ch,queue[max],front=-1,rear=-1;
	while(1)
	{
		system("cls");
		printf("\nMENU : \n\n Add : 1 \n\n Delete : 2 \n\n Display : 3 \n\n Quit : 4 \n\n Enter Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: addrear(queue,max,&front,&rear);
			        break;
			case 2: delfront(queue,max,&front,&rear);
			        break;
			case 3: display(queue,max,&front,&rear);
			        break;
			case 4: exit(0);
			        break;
		}
	}
	return 0;
}
void addrear(int *p,int n,int *f,int *r)
{
	 int element;
	 if((*f==0 && *r==n-1)||(*f==*r+1))
	  {
	 	printf("\n\n Circular queue is Full !");
	 	return;
	 }
	 if(*f==-1)
	 {
	 	*f=*r=0;
	 }
	 else if(*r==n-1)
	 {
	 	*r=0;
	 }
	 else 
	 {
	 	(*r)++;
	 }
	 printf("\n\nEnter Element : ");
	 scanf("%d",&element);
	 p[*r]=element;
}
void delfront(int *p,int n,int *f,int *r)
{
	if(*f==-1)
	{
		printf("\n\n Circular queue is empty !");
		return;
	}
	if(*f==*r)
	{
		*f=*r=-1;
	}
	else if(*f==n-1)
	{
		*f=0;
	}
	else
	{
		(*f)++;
	}
}
void display(int *p,int n,int *f,int *r)
{
	 int i;
	if(*f==-1)
	{
		printf("\n\n Circular queue is Empty !");
		return;
	}
	if (*f<=*r)
	{
		for(i=*f;i<=*r;i++)
		{
			printf("\n%d",p[i]);
		}
	}
	else if(*f>*r)
	{
		for(i=0;i<=*r;i++)
		{
			printf("\n%d",p[i]);
		}
		for(i=*f;i<=n-1;i++)
		{
			printf("\n%d",p[i]);
		}
	}
}

