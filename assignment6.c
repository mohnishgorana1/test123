#include<stdio.h>

int main()
{
    int n,s=0,i;

//(1) program to calculate sum of first N natural numbers    
    printf("Enter a value of N for calculate sum on N numbers ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("Sum is %d",s);
  
//(2) program to calculate sum of first N even natural numbers
    printf("\nEnter a value of N for calculate sum of first N even natural numbers ");
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++)
    {
        s=s+2*i;
    }
    printf("\nSum of first %d even natural numbers is %d",n,s);

//(3) program to calculate sum of first N odd natural numbers
    printf("\nEnter a value of N for calculate sum of first N odd natural numbers ");
    scanf("%d",&n);
    s=0;
    for(i=0;i<=n-1;i++)
    {
        s = s + 2*i+1 ;
    }
    printf("\nSum of first %d odd natural numbers is %d",n,s);

//(4)program to calculate sum of squares of first N natural numbers
    printf("\nEnter a value of N for calculate sum of squares of first N natural numbers ");
    scanf("%d",&n);
    s=0;
    for(i=0;i<=n;i++)
    {
        s = s + i*i ;
    }
    printf("\nSum of square of first %d  natural numbers is %d",n,s);


//(5)program to calculate sum of cubes of first N natural numbers
    printf("\nEnter a value of N for calculate sum of cubes of first N natural numbers ");
    scanf("%d",&n);
    s=0;
    for(i=0;i<=n;i++)
    {
        s = s + i*i*i ;
    }
    printf("\nSum of cubes of first %d natural numbers is %d",n,s);

//(6) program to calculate factorial of a number
    int fact=1;
    printf("\nEnter a number to find its factorial ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d is %d",n,fact);

//(7) program to count digits in a given number
    int count=0;
    printf("\nEnter a number ");
    scanf("%d",&n);
    if (n==0) printf("Number of digit is 1");
    else 
    {    while(n!=0)
        {
            n=n/10;
            count++;
        }
        printf("Number of digit is %d",count);
    }

    
//(8) program to check whether a given number is a Prime number or not
    int flag=0;
    printf("\nEnter a number to check whether it is prime number or not ");
    scanf("%d",&n);
    for (int i=2;i<n/2;i++)
    {   
        if(n%i==0) 
        {
            flag=1;
            break;
        }
    }
   if(flag==1)  printf("Not Prime Number");
   else     printf("Prime Number");



//(9) program to calculate LCM of two numbers
    int a,b;
    printf("\nEnter two numbers to check their LCM ");
    scanf("%d%d",&a,&b);
    for(i=2;i<=a*b;i++)
    {   
        if(i%a==0 && i%b==0)
        {   
            printf("LCM of %d and %d is %d ",a,b,i);
            break;
        }    
    }

//(10) program to reverse a given number
    int rem,rev=0;

    printf("\nEnter a number to reveser it ");
    scanf("%d",&n);

    while (n!=0)
    {
        rem = n%10;
        n=n/10;
        rev = rev*10 + rem;
            
    }
    printf("\nReverse is %d",rev);
    
    





    return 0;
}