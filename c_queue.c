#include<stdio.h>
#define max 5

int choice,i,item;
int r=-1,f=-1;
int a[max];

int insert()
{
	if(((r+1)%max)==f)
	  printf("## Queue Is Full.\n");
	  
	else if(f=-1)
	{	printf("Enter Your Value To Be Insert: \n");
		scanf("%d",&item);
		 r=0;
		 f=0;
		 a[r]=item;
	}
	else
	{
		printf("Enter Your Value To Be Insert: \n");
		scanf("%d",&item);
		
		
			
			(r=(r+1)%max);
		     a[r]=item;
	}
}

int del()
{
	if(f==-1)
	   printf("## Queue Is Empty.");
	else if(f==r)
	{
		f=r=-1;
	}	
	else
	{
		(f=(f+1)%max);
		
	}
} 

int display()
{
        if(f==-1)
            printf("\n## Queue Is Empty.");
        else
        {       
		    for(i=f;i<r;i++)
                printf("\nPosition:%d           Value:%d",i,a[i]);
        }
                printf("\n");
}





int main()
{
        printf("Simple Queue Programm.............\n");
        while(1)
        {
                printf("\n##### Queue Main Manu #####\n");
                printf("\n1.Insertion. \n2.Delection. \n3.Display \n4.Exit.\n");
                printf("\nEnter Your Choice: ");
                scanf("%d",&choice);
        switch(choice)
        {
                case 1:
                insert();
                break;

                case 2:
                del();
                break;

                case 3:
                display();
                break;

                case 4:
		return 0;
                break;
        }
        }
}
