// CODER : Rahul Noulia


// Here i use typedef which means i defined a new name of existing datatype .

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *link;
}a;
a *start=NULL; 
void create();
void Insert_beg();
void Insert_any();
void Insert_last(int);
void del();
void Display();
void quit();
int main()
{
	int ch,element;
	while(1)
	{
		printf("\n\n Menu : \n\n 1. Create \n\n 2. Insert_Beginning  \n\n 3. Insert_Between \n\n 4. Insert_last \n\n 5. Delete \n\n 6. Display \n\n 7. Quit \n\n Enter Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();   break;
			case 2:Insert_beg(); break;
			case 3:Insert_any(); break;
			case 4:printf("\n\n Enter Element : ");
			       	scanf("%d",&element);
			       Insert_last(element); break;
			case 5:del(); break;
			case 6:Display();  break;
			case 7:exit(0);  break;
		}
		
		
	}
	return 0;
}
void create()
{
	int n,i,element;
	a *p,*x;
	printf("\n\n Enter How Many nodes :");   
        scanf("%d",&n);
	 for(i=0;i<=n-1;i++)
	  {
	printf("\n\n Enter Element : ");   	
        scanf("%d",&element);
        p=(a *)malloc(sizeof(a));
        p->data=element;
     	p->link=NULL;
        if(start==NULL)
        {
	      start=p;
	}
		else
		{
			x=start;  
			 while(x->link!=NULL)
			{
				x=x->link;
			}   
              x->link=p;  
}	
}	
}
void Display()
{
	a *s;
	if(start==NULL)
	{
		printf("\n\n Empty !!");   return;
	}
	s=start;
	while(s!=NULL)
	{
		printf("\n%d",s->data);
                s=s->link;
	}
}
void Insert_beg()
{
a *p;
p=(a *)malloc(sizeof(a));
printf("\n\n Enter Element : ");
scanf("%d",&p->data);
p->link=start;    start=p;	
}
void Insert_any()
{
	int i,element,pos;
	a *p,*q;
	p=(a *)malloc(sizeof(a));
	printf("\n\n Enter Element : ");
			       	scanf("%d",&element);
			       	printf("\n\n Enter postion :");
			       	scanf("%d",&pos);
	p->data=element;
			if(pos==1)
	{
		p->link=start;
		start=p;
	}
else
{
q=start;
	for(i=0;i<=pos-2;i++)
	{
		q=q->link;
		if(q->link==NULL)
		{
			break;
		}
	}
	p->link=q->link;
	q->link=p;
}
}
void Insert_last(int element)
{
     a *p,*x;
     p=(a *)malloc(sizeof(a));
     p->data=element;
			p->link=NULL;
        if(start==NULL)
        {
        	p->link=NULL;
			start=p;
		}
		else
		{
			x=start;   
                   while(x->link!=NULL)
			{
				x=x->link;
			}   
           x->link=p;  
	}
}
void del()
{
	int element;
	a *q1,*q2;
	if(start==NULL)
	{
		printf("\n\n Empty !!");
		return;
	}
	printf("\n\n Enter Element : ");
        scanf("%d",&element);
		q1=start;
		if(start->data==element)
		{
			start=start->link;
			free(q1);
		}
		else
		{
		q2=q1->link;
		while(q2!=NULL)
		{
		    if(q2->data==element)
			{
				break;
				}	
			q1=q2;
			q2=q2->link;
		}	
             if(q2!=NULL)
		 {
		 	q1->link=q2->link;
		 	free(q2);
		 }
}
	    if(q2==NULL)
		 {
		 	printf("\n\n Element not found !!");
		 }
	}

