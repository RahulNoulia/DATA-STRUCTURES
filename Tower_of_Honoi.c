//  Coder :  Rahul Noulia

#include<stdio.h>
#include<conio.h>
void tower_honoi(int,char,char,char);
int main()
{
	int n;
	printf("Enter number of Disk:");
	scanf("%d",&n);
	tower_honoi(n,'S','A','D');
	getch();
	return 0;
}
void tower_honoi(int n,char a,char b,char c)
{
	if(n>0)
	{
		tower_honoi(n-1,a,c,b);
		printf("move from of %c to %c\n",a,c);
		tower_honoi(n-1,b,a,c);
	}
}
            			
	                      /* 
                                   SECOND WAY OF DOING

                              void tower_honoi(int n,char a,char b,char c)
				{
					if(n==1)
					{
						printf("\nDisk move from %2c to %2c\n",a,c);
					}
					else
					{
						tower_honoi(n-1,a,c,b);
						tower_honoi(1,a,b,c);
						tower_honoi(n-1,b,a,c);
					}
				}
                             */
