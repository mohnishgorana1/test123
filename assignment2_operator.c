#include<stdio.h>
#include<string.h>
int main()
{
    int n,a,b,c,x,y,z;
    float f;
    int sum;

//print unit digit

    printf("\nEnter a number");
    scanf("%d",&n);
    printf(" \n The unit digit is %d",n%10);

// print number without last digit
    printf("\n Enter a number");
    scanf("%d",&n);
    printf("\n Number without its last digit is %d",n/10);
 
//swao two values;

    printf("\n Enter value in a- ");
    scanf("%d",&a);
    printf("\n Enter value in b- ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("\n value in a is %d",a);
    printf("\n value in b is %d",b);
 
// swap without third variable   

    printf("\n Enter value in x- ");
    scanf("%d",&x);
    printf("\n Enter value in v- ");
    scanf("%d",&y);
        x=x+y;
        y=x-y;
        x=x-y;
    printf("\n value in x after swap is %d",x);
    printf("\n value in y after swap is %d",y);

//sum of digits of three digit number

    printf("\nEnter the three digit number");
    scanf("%d",&n);
    sum= n/100 + (n/10)%10 + n%10; 
    printf("\nSum of all digits are %d",sum);


// DISPLAY CHARACTERS ASCII CODE
    char as;
    printf("\nEnter any character -");
    scanf("%s",&as);
    printf("\nASCII Code is %d",as,as);


// postion of first 1 from LSB
    printf("\nEnter a Number ");
    scanf("%d",&n);
    if (n%2 != 0)
        {
            printf("\nFirst 1 is first from LSB");
        }

    
    
// Odd/Even using bitwise operator.
    printf("\nEnter a number to check Odd or Even");
    scanf("%d",&n);

printf("\nSize of int %d",sizeof(int));
printf("\nSize of float %d",sizeof(float));
printf("\nSize of char %d",sizeof(char));
printf("\nSize of double %d",sizeof(double));



//change last digit of a number to zero 2345 -->2340


//Append a digit in the number and print the resulting number. (
    printf("\nEnter a number ");
    scanf("%d",&a);
    printf("\n Enter 1 digit number ");
    scanf("%d",&b);
    printf("\nAfter appending %d",(a*10)+b);


// INR to USD 

    float USD,R;
    printf("\nEnter INR ");
    scanf("%f",&R);
    USD=76.23*R;
    printf("\nYour %f INR are equaivalent to %f",R,USD);


//take a three-digit number from the user and rotate its digits by one position towards the right.
    printf("\nEnter any three digit number :- ");
    scanf("%d",&n);


    
    
    
    
    return 0; 

}