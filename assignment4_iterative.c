#include<stdio.h>
int main()
{
int i=1;
//mysirg 5 times
    while (i<=5)
    {   printf("MySirg\n");
        i++;
    }

//first 10 natural numbers
    i=1;
    while (i<=10)
    {
        printf("%d\n",i);
        i++;
    }

// first 10 natural number is reverse order
    i=10;
    while (i>=1)
    {
        printf("\n%d",i);
        i--;
    }
//first 10 odd natural number
    i=1;
    printf("\nFirst 10 odd numbers");
    while (i<20)
    {
       
       i=i+2;
    }

//first 10 odd natural number in reverse order
    i=19;
    printf("\n First 10 odd natural number in reverse order");
    while (i>=1)
    {
        printf("\n%d",i);
        i=i-2;
    }
//first 10 even natural number
    printf("\nfirst 10 even natural number");
    for ( i = 2; i<=20; i+=2)    printf("\n%d",i);
    
//first 10 even natural number in reverse order
    printf("\nfirst 10 even natural number in reverse order");
    for ( i = 20; i >=2; i-=2)  printf("\n%d",i);

//squares of the first 10 natural numbers
    printf("/nsquares of the first 10 natural numbers");
    for (i=1 ; i<=10 ; i++)     printf("\n%d",i*i);
    
//cubes of the first 10 natural numbers
    printf("/ncube of the first 10 natural numbers");
    for (i=1 ; i<=10 ; i++)     printf("\n%d",i*i*i);

//table of 5
    printf("/ntable of 5");
    for (i=1 ; i<=5 ; i++)     printf("\n%d",i*5);


    return 0;
}