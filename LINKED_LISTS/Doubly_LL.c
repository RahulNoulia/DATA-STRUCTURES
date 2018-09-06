//  Coder :  Rahul Noulia


// Here i use typedef which means i defined a new name of existing datatype .

#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
	struct node *prev,*link; 	int data;
}a;
a *start=NULL;
void create();  
void insert_beg();  
void insert_bet();  
void insert_last();  
void del();  
void traverse();  
void quit();
int main()
{
	int c;	
       while(1)
	{
		printf("\n\n DOUBLY LINKED LIST MENU : \n\n\t\t\t 1. Create \n\n\t\t\t 2. Insert_beg \n\n\t\t\t 3. Insert_Between \n\n\t\t\t 4. Insert_last \n\n\t\t\t 5. Delete \n\n\t\t\t 6. Display \n\n\t\t\t 7. Quit \n\n\t\t\t Enter choice :");
		scanf("%d",&c);
		switch(c)
		{
			case 1:create(); break;  
                        case 2:insert_beg(); break;
			case 3:insert_bet(); break;  
                        case 4:insert_last(); break;
			case 5:del(); break;  
                        case 6:traverse(); break;  
                        case 7:exit(0);break;
		}
	}
	return 0;
}
void create()
{
   int n,i;	a *t,*p;
   printf("\n\n Enter how many nodes :");   scanf("%d",&n);
   for(i=0;i<=n-1;i++)
   {
	t=(a *)malloc(sizeof(a));
    printf("\n\n Enter Element : ");  
     scanf("%d",&t->data); 	
      t->link=NULL;
    if(start==NULL)
	{
		t->prev=NULL;  
                start=t;
			 } 		
	else
	{
		p=start;   while(p->link!=NULL)
		{
			p=p->link;
		}
	  p->link=t; t->prev=p; 
	}
}}
void insert_beg()
{
	a *t;
	t=(a *)malloc(sizeof(a));  
         printf("\n\n Enter element :");  
          scanf("%d",&t->data); 
          t->prev=NULL;
	if(start==NULL)
	{
		t->link=NULL; start=t;
	}
	else
	{
		t->link=start; 
               start->prev=t;
               start=t;
	}}
void insert_bet()
{
      int pos,i;  a *t,*p;
	  t=(a *)malloc(sizeof(a));
	  printf("\n\n Enter Element  :");  
          scanf("%d",&t->data);
	  printf("\n\n Enter Position :"); 
          scanf("%d",&pos);
	  if(pos==1)
	  {
	  	t->prev=NULL; 
                 t->link=start; 
                 if(start!=NULL) 
                 start->prev=t;  
                 start=t;
		  }	
		  else
		  {
		  	p=start;
		  	for(i=0;i<pos-2;i++)
		  	{
		  		p=p->link;
		  		if(p->link==NULL)
		  		{
		  			break;
				  }
			  }
			 t->link=p->link; 
                       if(p->link!=NULL)
                        {
                          p->link->prev=t;
                         }
			    p->link=t; 
                            t->prev=p; 
		  }
}
void insert_last()
{
	a *t,*q;
	t=(a *)malloc(sizeof(a));
	printf("\n\n Enter Element : ");  
        scanf("%d",&t->data);
	t->link=NULL;
	if(start==NULL)
	{
		t->prev=NULL; start=t;
	}
	else
	{
		q=start;
		while(q->link!=NULL)
		{
			q=q->link;
		}
		q->link=t; 
               t->prev=q;
	}
}
void del()
{
	int e;  a *p1,*p2;
    if(start==NULL)
	{
		printf("\n\n Empty !!");  return;
	}
	printf("\n\n Enter Element :");
	scanf("%d",&e);	
	p1=start;
      if(start->data==e)
    {
    	start=start->link;
        start->prev=NULL;
         free(p1);
	}
	else
	{
     p2=p1->link;  while(p2!=NULL)
	{
		if(p2->data==e)
		{
			break;
		}
		p1=p2;  
              p2=p2->link;
	  }  
         if(p2!=NULL)
         {  
          p1->link=p2->link; 
          if(p2->link!=NULL)
           {
             p2->link->prev=p1;
           }   
         free(p2);  
       }
     }
     
         if(p2==NULL)  
        { 
          printf("\n\n Element not Present !!");   
}
}
void traverse()
{
	a *x;
	if(start==NULL)
	{
		printf("\n\n Empty !!");  
                 return;
	}
	x=start; 
       while(x!=NULL)
	{
		printf("\n%d",x->data);    
                 x=x->link;
	}
}
