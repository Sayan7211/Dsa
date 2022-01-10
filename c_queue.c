#include<stdio.h>
#define max 5

int i,item,choice;
int r=-1,f=-1;
int a[max];

void insertion()
{
        if(f==(r+1)%max)
                printf("## Queue Is Fully.");
        else
        {
                printf("Enter The Elements To Be Insert:  \n");
                scanf("%d",&item);
                if(f==-1)
                        f=r=0;
                else
                        r=(r+1)%max;

                a[r]=item;
        }
}

void delection()
{
        if(f==-1)
                printf("## Queue Is Empty.");
        else
        {
                if(f==r)
                        f=r=-1;
                else
                        f=(f+1)%max;
        }
}


void display()
{
        if(f!=-1)
        {
                for(i=f;i!=r;i=(i+1)%max)
                {
                        printf("\n Possition:%d         Value:%d",i,a[i]);
                }

        else

                printf("## Queue Is Empty.");
        }
}


int main()
{
        printf("Simple Queue Programm.............\n");
        while(1)
        {
                printf("\n##### Queue Main Manu #####\n");
                printf("\n1.Insertion. \n2.Delet \n3.Display \n");
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

                //case 4:
                //return 0;
        }
        }
}

