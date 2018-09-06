//  Coder :  Rahul Noulia


#include<stdio.h>
#include<stdlib.h>
# define max 5
top=-1;
stack[max];
void push();
void pop();
void display();
void quit(void);

int main()
{
     int ch;
    while (1)
	{
		printf("\n\n MENU:  \n\n 1. PUSH \n\n 2. POP \n\n 3.  Display \n\n 4. Exit \n\n Enter Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
            case 1: push(); break;
		    case 2: pop(); break;
		    case 3:display(); break;
		    case 4: exit(0);
		}
	}
	return 0;
}
void push()
{
   if(top==max-1)
   {
      printf("\n\n Stack is full");
      return;
   }
   else
   {
   	  top++;
      printf("\n\n Enter element to be push : ");
      scanf("\n%d",&stack[top]);
    }
}
void pop()
{
   int temp;
   if(top==-1)
   {
   printf("\n\n Stack is empty ! u cannot pop");
   }
   else
   {
     temp=stack[top];
     top--;
   }
}
void display()
{
   int i;
   for(i=top;i>=0;i--)
   {
     printf("\n%3d",stack[i]);
   }
}

