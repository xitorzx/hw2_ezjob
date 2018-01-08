#include <stdio.h>
#include <string.h>

void up(int n);
void down(int n);
void left(int n);
void right(int n);
void diamond(int n);
    
void main()
{
    int num = 0;
    int n =0;
    printf("Please input the length of triangle:\n");
    scanf(" %d",&n);
    
    do
    {
        printf("1.up 2.down 3.left 4.right 5.diamond 0.exit:\n");
        scanf(" %d",&num);
        switch(num)
        {
            case 1:
                up(n);
                break;
            case 2:
                down(n);
                break;
            case 3:
                left(n);
                break;
            case 4:
                right(n);
                break;
            case 5:
                diamond(n);
                break;
        }
        if(num>5 || num <0) printf("Please try to enter correct number.\n");
    }while(num!=0);
}

void diamond(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if ((i+j>n) && (j-i<n))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
     }   
      
      for(i=1;i<=n;i++)
      {
         for(j=1;j<=2*n-1;j++)
         {
             if ((i+j)<=2*n && j-i>=0)
                printf("*");
             else
                printf(" ");
          }
          printf("\n");
         
     }
}
void down(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
         for(j=1;j<=2*n-1;j++)
         {
             if ((i+j)<=2*n && j-i>=0)
                printf("*");
             else
                printf(" ");
          }
          printf("\n");
    }
}
void left(int n)
{
    int i,j;
    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=n;j++)
        {
            if ((i+j>n) && (i-j<n))
            printf("*");
            else
            printf(" ");
         }
         printf("\n");
     }
}
void right(int n)
{
    int i,j;
    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=n;j++)
        {
            if ((i+j<=2*n) && (j-i<=0))
            printf("*");
            else
            printf(" ");
         }
         printf("\n");
     }    
}
void up(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if ((i+j>n) && (j-i<n))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
     } 
}
