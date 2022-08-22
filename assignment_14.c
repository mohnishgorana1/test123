//                                  Array in C Language

#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void sum();
void avg();
void SOE();
void max();
void min();
void Rev_arr();
void sort();
void max2();
void min2();
void cpy();
int main()
{   
    
    printf("Enter 10 values to add them \n ");          sum();      
    printf("\nEnter 10 values to find average of them \n ");      avg();    
    printf("\nEnter 10 values to find sum of Odd and even(0 included) Values seperately "); SOE();   
    printf("\nEnter 10 values to find Greatest btw them \n ");            max();    
    printf("\nEnter 10 values to find Smallest btw them \n ");            min();    
    printf("\nEnter 10 values to display Reverse of them \n ");           Rev_arr();   
    sort();
    printf("\nEnter 10 values to find 2nd Largest btw them \n ");            max2();    
    printf("\nEnter 10 values to find 2nd Smallest  btw them \n ");            min2();  
    cpy();

    return 0;
}


//1. calculate the sum of numbers stored in an array of size 10. Take array values from the user.
    void sum()
    {
        int s=0,i,a[10];
        for (i=0;i<10;i++)     scanf("%d",&a[i]);

        for (i=0;i<10;i++)
        {
            s=s+a[i];
        }
        printf("\nSum is %d",s);

    }
//2. calculate the average of numbers stored in an array of size 10. Take array values from the user.
    void avg()
    {
        int s=0,i,a[10];
        float av;
        for (i=0;i<10;i++)     scanf("%d",&a[i]);

        for (i=0;i<10;i++)
        {
           s=s+a[i];
        }
        av=s/10;
        printf("\nAverage is %f",av);
    }
//3. calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
    void SOE()
    {
        int so=0,se=0,i,a[10];
        for (i=0;i<10;i++)     scanf("%d",&a[i]);

        for (i=0;i<10;i++)
        {
           if(a[i]%2==0)  se=se+a[i];
           else         so=so+a[i];
        }

        printf("\nEven Sum is %d",se);
        printf("\nOdd Sum is %d",so);
    }
//4. find the greatest number stored in an array of size 10. Take array values from the user.
    void max()
    {
    int a[5]; int i,m=-9999;

        printf("Enter 5 number");
        for(i=0;i<=5;i++)   scanf("%d",&a[i]);

        for (i=0;i<=5;i++)
        {
            if(m < a[i])
                m=a[i];
        }
        printf(" Greatest number is %d",m);
    }    
//5. find the smallest number stored in an array of size 10. Take array values from the user.
    void min()
    {
        int a[5]; int i,m= 999999;

        printf("Enter 5 number");
        for(i=0;i<=5;i++)   scanf("%d",&a[i]);

        for (i=0;i<=5;i++)
        {
            if(m > a[i])
                m = a[i];
        }
        printf(" Greatest number is %d",m);
    }    
    
    

//6. sort elements of an array of size 10. Take array values from the user.         
    void sort()
    {   
        int i,j,a[10],t;
        printf("Enter 10 numbers \n");
        for (i=0;i<10;i++)     
        {   
            scanf("%d",&a[i]);
        }    

        printf("Array Before sort \n");
            for (i=0;i<10;i++)     printf(" %d ",a[i]);

        for (i=0 ; i<9 ; i++)
        {
            for (j=i+1 ; j<10 ; j++)
            {
                if ( a[i] > a[j] )
                    {
                        t = a[i];
                        a[i] = a[j];
                        a[j] = t;
                    }
            }
        }   
        printf("Array arter sort");
            for (i=0;i<10;i++)     printf(" %d ",a[i]);
    }   

//7. find second largest in an array.Take array values from the user.
void max2()
{
    int i,l,sl,a[10];
    

    printf("\n Enter 5 Array Values\n");
    for(i=0;i<5;i++)      scanf("%d",&a[i]);

    l =  INT_MIN;
    sl = INT_MIN;



    for (i=1;i<5;i++)
    {
        if(a[i]>l)
        {
            sl=l;
            l=a[i];
        }
        else if( a[i] > sl && a[i] != l)
            sl= a[i];
    }
    printf("\n Second Largest  %d",sl);
}

//8. find the second smallest number in an array.Take array values from the user.
void min2()
{
    int i,j,a[10],t;
        printf("Enter 10 numbers \n");
        for (i=0;i<10;i++)     
        {   
            scanf("%d",&a[i]);
        }    

        printf("Array Before sort \n");
            for (i=0;i<10;i++)     printf(" %d ",a[i]);

        for (i=0 ; i<9 ; i++)
        {
            for (j=i+1 ; j<10 ; j++)
            {
                if ( a[i] > a[j] )
                    {
                        t = a[i];
                        a[i] = a[j];
                        a[j] = t;
                    }
            }
        }   
        printf("Second Smallest number is %d",a[1]);
}

//9. read n number of values in an array and display it in reverse order. Take array values from the user.

    void Rev_arr()
    {
        int i,a[10],m;
        for (i=0;i<10;i++)     scanf("%d",&a[i]);

        printf("\nYour Array Values are ");
        for (i=0;i<10;i++)     printf("%d ",a[i]);

        printf("\nIn Reverse order ");
        for (i=9;i>=0;i--)     printf("%d ",a[i]);
    }

//10.copy the elements of one array into another array.Take array values from the user.
    void cpy()
    {   
        int a[5],b[5];
        int i;

        printf("\n Enter Array A values ");
        for(i=0;i<5;i++)    scanf("%d",&a[i]);
    
        printf("\n Array A values are  ");
        for(i=0;i<5;i++)    printf(" %d ",a[i]);

        printf("\n After Copy  ");    

        for(i=0;i<5;i++)    printf(" %d ",b[i] = a[i]);
        
    

    }

