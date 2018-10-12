//  Coder :  Rahul Noulia


#include<stdio.h>
#include<stdlib.h>
void input(int *,int);
void output(int *,int);
void sort(int *,int);
void merge(int *,int *,int *,int,int);
int main()
{
    int a1[20],a2[20],a3[40],l,m,n,ch;
    printf("\n\n Enter how many element in array1 : ");
    scanf("%d",&l);
    printf("\n\n Enter how many element in array2 : ");
    scanf("%d",&m);
    while(1)
{
     printf("\n\n\t\t\t\t\t\t Menu of Sort and Merge  \n\n 1. Input  \n\n 2. Output  \n\n 3. Sort  \n\n 4. Merging  \n\n Quit  \n\n Enter Choice  ");
	 scanf("%d",&ch);
     switch(ch)
     {
       case 1:  printf("\n\n Enter element in array 1:");
                input(a1,l);
                printf("\n\n Enter element in array 2:");
                input(a2,m);   break;   	       
       case 2: 
	           printf("\n\n Element of 1 array:");
               output(a1,l);
               printf("\n\n Element of 2 array");
               output(a2,m);   break;
       case 3:
       	       printf("\n\n After sorting 1 array:");
       	       sort(a1,l);
       	       printf("\n\n After sorting 2 array:");
       	       sort(a2,m);   break;
       case 4:
       	        printf("\n\n After merging");
                merge(a1,a2,a3,l,m);
                output(a3,l+m);  break;
       case 5:
              exit(0);
     }
     
}
return 0;
}
void input(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
{
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
void sort(int *p,int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i]>p[j])
			{
				c=p[i];
				p[i]=p[j];
				p[j]=c;
			}
		}
		printf("\n%d",p[i]);
	}
}
void merge(int *p,int *b,int *x,int l,int m)
{
	int i=0,j=0,k=0;
	while(i<l && j<m)
	{
		if(p[i]<b[j])
		{
			x[k]=p[i];
			i++;
			k++;
		}
		else if(p[i]>b[j])
		{
			x[k]=b[j];
			j++;
			k++;
		}
	}
	if(i==l)
	{
		while(j<m)
		{
			x[k]=b[j];
			j++;
			k++;
		}
	}
	if(j==m)
	{
		while(i<l)
		{
			x[k]=p[i];
			i++;
			k++;
		}
	}
}
