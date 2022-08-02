//              ASSIGNMENT 3 ON DECISION CONTROL STATEMENT
#include<stdio.h>
#include<math.h>


int main()
{
    int n,a,b,c;
    char ch;


//1) number positive/non positive
    printf("\nEnter a number ");
    scanf("%d",&n);
    if (n>0) 
    printf("Positive");
    else
    printf("Non Positve"); 

//2) divisible by 5 or not 
    printf("\nEnter a number ");
    scanf("%d",&n);
    if (n%5==0)
        printf("divisible by 5");
    else
        printf("Not divisible by 5");

//3) number even or odd    
    printf("\nEnter a number ");
    scanf("%d",&n);
    if (n%2==0) 
    printf("even");
    else
    printf("Odd"); 


//4) number even or odd using bitwise operator
    printf("\nEnter a number ");
    scanf("%d",&n);
    if ( (n&1) == 0)   printf("Even");
    else    printf("Odd");

//5) check a number three digit or not
    printf("\nEnter a number ");
    scanf("%d",&n);
    if(99<n && n<1000) printf("\nIt is a three digit number");
    else printf("It is not a three digit number");

//6) check greater number
    printf("\nEnter first number ");
    scanf("%d",&a);
    printf("\nEnter second number ");
    scanf("%d",&b);
    if(a==b) printf("Numbers are equal");
    if(a>b) printf("%d is greater than %d",a,b);
    if(a<b) printf("%d is greater than %d",b,a);

//7 check roots of Quadratic Eqn are real equal or imaginary
    float D;
    printf("Enter the coefficients (a,b,c) of quatratic eqn of form ax^2+bx+c respectively");
    scanf("%d%d%d",&a,&b,&c);
    D = sqrt(b*b -4*a*c);
    if (D==0) printf("\nRoots are Equal");
    if(D<0) printf("\nRoots are imaginary");
    if(D>0) printf("\nRoots are Real");

//8 check leap year
    printf("\n Enter any YEAR in yyyy format");
    scanf("%d",n);
    if (n%4==0) printf("Leap Year");
    else printf("Non Leap Year");

//9 find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
    printf("\nEnter three numbers ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        {
            if (a>c)    printf("%d is greatest",a);
            else        printf("%d is greatest",c);
        }
    else 
        {
            if(b>c) printf("%d is greatest",b);
            else    printf("%d is greatest",c);
        }


//10  profit or loss percentage
    float pp,lp,profit,loss;
    printf("\nEnter Cost Price ");
    scanf("%d",&a);
    printf("\nEnter Selling Price ");
    scanf("%d",&b);
    profit = b-a;
    loss = a-b;
    pp=(profit/a)*100;
    lp=(loss/a)*100;

    if (a!=b)
        {
            if (a>b)    printf("\n Loss Percentage is %f",lp);
            else        printf("\n Profit Percentage is %f",pp);
        }
    else printf("No loss no Profit");

//11 marks of student and fail or pass
int s1,s2,s3,s4,s5;
    printf("\n Enter Candiate 1 marks");
    scanf("%d",&s1);
    printf("\n Enter Candiate 2 marks");
    scanf("%d",&s2);
    printf("\n Enter Candiate 3 marks");
    scanf("%d",&s3);
    printf("\n Enter Candiate 4 marks");
    scanf("%d",&s4);
    printf("\n Enter Candiate 5 marks");
    scanf("%d",&s5);

    if (s1>=33) printf("candidate 1 is pass "); else printf("Candidate 1 is fail ");
    if (s2>=33) printf("candidate 2 is pass "); else printf("Candidate 2 is fail ");
    if (s3>=33) printf("candidate 3 is pass "); else printf("Candidate 3 is fail ");
    if (s4>=33) printf("candidate 4 is pass "); else printf("Candidate 4 is fail ");
    if (s5>=33) printf("candidate 5 is pass "); else printf("Candidate 5 is fail ");

//13 check whether a given number is divisible by 3 or divisible by 2
        printf("\n Enter a number ");
        scanf("%d",&n);
        if (n%3==0)    printf("\nDivisible by 3");
        if (n%2==0)    printf("\nDivisible by 2");
        if (n%2!=0 && n%3!=0 )  printf("\nNot divisible by both 2 nd 3");

//14 check whether a given number is divisible by 7 or divisible by 3.
        printf("\n Enter a number ");
        scanf("%d",&n);
        if (n%7==0)    printf("\nDivisible by 7");
        if (n%5==0)    printf("\nDivisible by 5");
        if (n%7!=0 && n%5!=0 )  printf("\nNot divisible by both 7 nd 5");

//15 check whether a given number is positive, negative or zero.
        printf("\n Enter a number ");
        scanf("%d",&n);
        if(n>0) 
            printf("Positive");
        else{
            if(n<0) printf("Negative");
            else printf("Number is Zero");
        }
         
//16 Character Lowercase ,Uppercase ,Digit or Special Character
    printf("\nEnter a character ");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z') printf("Lowercase");
    else if (ch>='A' && ch<='Z')    printf("Uppercase");
    else if (ch>='0' && ch<='9')    printf("Digit");
    else    printf("Special Character");    

//17 Valid Triangle or Not!
    printf("\n Enter the lengths of a Triangle ");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c && b+c>a && c+a>b)    printf("\nTriangle is valid!");
    else printf("Triangle is not valid for given sides");

    



//18 program which takes the month number as an input and display number of days in that month.
        printf("\n Enter a month number ");
        scanf("%d",&n);    
        if (n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
            printf("\nMonth has 31 days");
        else if (n==4 || n==6 || n==9 || n==11) printf("\nMonth has 30 days");
             else printf("\nMonth has either 29 or 28 days");














    return 0;
}