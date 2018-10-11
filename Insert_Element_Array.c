//  Coder :  Rahul Noulia


#include<stdio.h>
#include<stdlib.h>
# define MAX 100
void input(int *,int);
void output(int *,int);
void insert_element(int *,int,int,int);
int main()
{
    int a[MAX],pos,element,ch,n;
    printf(" Enter how many element in array -> ");
    scanf("%d",&n);
    while(1)
{
     printf("\n Menu: \n\n 1 . Input \n\n 2 . Display  \n\n 3 . Insert element \n\n 4 . Quit  \n");
     printf("\n Enter choice -> ");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1: input(a,n);
               break;
      
       case 2: output(a,n);
               break;
      
        case 3: insert_element(a,n,pos,element);  
                n+=1;
                break;
   
        case 4:   exit(0);
     }
     
}
return 0;
}
void input(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
{
     printf("\n Enter element in array -> ");
     scanf("%d",p+i);
}
}
void output(int *p,int n)
{
 int i;
 for(i=0;i<n;i++)
{
     printf("\n%d\t",*(p+i));
}
}
void insert_element(int *p,int n,int pos,int element)
{
     int i;
     printf("\n Enter element which u want to insert -> ");
     scanf("%d",&element);
     printf("\n Enter position where u want to insert -> ");
     scanf("%d",&pos);
     for(i=n-1;i>=pos-1;i--)
{
       *(p+i+1)=*(p+i);
}
p[pos-1]=element;
}
