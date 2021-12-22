#include<stdio.h>
#define max 5
int choice,i,item;
int r=0,f=0;
int a[max];

int insertion()
{
        if(r==max)
                printf("\n## Queue Is Full.\n");
        else
        {
                printf("Enter A Value: ");
                scanf("%d",&item);
                printf("\nPosition:%d           Value:%d\n",r,item);
                a[r++]=item;
        }
}

int delection()
{
        if(f==r)
                printf("\n## Queue Is Empty.\n");
        else
        {
                printf("\nPosition:%d           Value:%d\n",f,a[f]);
                f++;
        }
}

int display()
{
        if(f==r)
                printf("\n## Queue Is Empty.");
        else
        {       for(i=f;i<r;i++)
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
                insertion();
                break;

                case 2:
                delection();
                break;

                case 3:
                display();
                break;

                case 4:
                return 0;
        }
        }
}

