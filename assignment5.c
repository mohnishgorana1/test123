//              ASSIGNMENT 5 MORE ON ITERATIVE STATEMENTS
#include<stdio.h>

int main()
{
    int i=0,x,n;


//(1) program to print MySirG N times on the screen
    
    printf("\nEnter number of time to print mohnish ");
    scanf("%d",&x);
    while(i<=x) 
    {
        printf("NOHNISH\n");
        i++;
    }

//(2) program to print the first N natural numbers
    printf("\nEnter value n to print the first N natural numbers ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)   printf("%d\n",i);

//(3) a program to print the first N natural numbers in reverse order
    printf("\nEnter value n for print the first N natural numbers in reverse order ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)   printf("%d\n",i);

//(4) a program to print the first N odd natural numbers
    printf("\nEnter value n for print the first N odd natural numbers ");
    scanf("%d",&n);
    for(i=0;i<n;i++)    printf("%d\n",2*i+1); 

//(5) a program to print the first N odd natural numbers in reverse order
    printf("\nEnter value n for print the first N odd natural numbers in reverse order ");
    scanf("%d",&n);
    for (i=n;i>=1;i--)      printf("%d\n",2*i-1);

//(6) a program to print the first N even natural numbers
    printf("\nEnter value n for print the first N even natural numbers ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)   printf("%d\n",2*i);

//(7) a program to print the first N even natural numbers in reverse order
    printf("\nEnter value n for print the first N even natural numbers in reverse order ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)   printf("%d\n",2*i);
//(8) a program to print squares of the first N natural numbers
    printf("\nEnter value n for print the square first N natural numbers ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)   printf("%d\n",i*i);

//(9) a program to print cubes of the first N natural numbers
    printf("\nEnter value n for print the cubes first N natural numbers ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)   printf("%d\n",i*i*i);


//(10) a program to print a table of N.
    printf("\nEnter value n for print the table of n ");
    scanf("%d",&n);
    i=1;
    while (i<=10)
    {
        printf("%d\n",n*i);
        i++;
    }














return 0;
}