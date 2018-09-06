//  Coder :  Rahul Noulia


#include<stdio.h>
#include<stdlib.h>
# define MAX 100
void input(int *,int);
void output(int *,int);
void delete_element(int *,int,int);
int main()
{
    int a[MAX],element,n,m,ch;
    printf("\n\nEnter how many element in array:");
    scanf("%d",&n);
    while(1)
{
     printf("\n\n Menu: \n\n 1 . Input  \n\n 2 . Display  \n\n 3 . Delete Element  \n\n 4 . Quit  \n ");
     printf("\n Enter choice:");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1:      input(a,n);
               break;
     
         case 2:   output(a,n);
                  break;
        
         case 3:    delete_element(a,n,element);
                     n=n-1;
                    break;
         case 4:     exit(0);
     }
     
}
return 0;
}
void input(int *p,int n)
{
    int i,r;
				if(n==0)
				{
				printf("\n\n Size of array is now Zero ! \n\n Want to Restart press 1... ");
				scanf("%d",&r);
				if(r==1)
				{
					main();
				}
				else
                                {
				       printf("Press 1   not other key ");
				}
				}
    for(i=0;i<n;i++)
{
     printf("\n Enter element in array:");
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
		void  delete_element(int *p,int n,int element)
		{
			  int i,found,pos;
			  printf("\n Enter element which u want to delete:");
			  scanf("%d",&element);
			  for(i=0;i<n;i++)
			  {
					if(p[i]==element)
					{
						 found=1;
						 pos=i;
						 break;
					}
                          }

		  if (found==1)
		{
				
			  for(i=pos;i<n-1;i++)
			 {
		      	   p[i]=p[i+1];
			  }
		}
		else 
		{
		  printf("\n Element is not present"); 
		}
}
