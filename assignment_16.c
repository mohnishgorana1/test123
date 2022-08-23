//                  Multi-Dimensional Array in C Language

#include<stdio.h>
#include<math.h>

void sum();
void product();
void transpose();
void trace_R();
void trace_L();
void sum_RC();
void LowM();
void UppM();
void min_1();

int main()
{   
    printf("Hello");
    sum();
    product();
    transpose();
    trace_R();
    trace_L();
    sum_RC();
    LowM();
    UppM();
    min_1();

    return 0;
}

//1. Write a program to calculate the sum of two matrices each of order 3x3.
void sum()
{
    int i,j,k;
    int x[3][3],y[3][3];
    printf("\nEnter the elements of matrix A and matrix B row wise\n");
    printf("\n");
         for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)       scanf("%d",&x[i][j]);
            }
 
    
    printf("\n");
         for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)       scanf("%d",&y[i][j]);
            }
    printf("\n");    
        printf("Matrix A \n");
            for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)      
                {
                    printf("%d ",x[i][j]);
                } 
                printf("\n");
            } 
    printf("\n");        
        printf("Matrix B \n");
            for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)      
                {
                    printf("%d ",y[i][j]);
                } 
                printf("\n");
            } 
    printf("\n");   

        printf("Sum is \n");
            for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)      
                {
                    printf("  %d  ", x[i][j] + y[i][j] );
                } 
                printf("\n");
            }

    
}

//2. Write a program to calculate the product of two matrices each of order 3x3.
void product()
{   
    int i,j,k;
    int x[3][3],y[3][3];
    printf("\nEnter the elements of matrix A and matrix B row wise\n");
    
    for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)       scanf("%d",&x[i][j]);
            }    
    
    printf("\n");
         for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)       scanf("%d",&y[i][j]);
            }
    printf("\n");    
        printf("Matrix A \n");
            for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)      
                {
                    printf("%d ",x[i][j]);
                } 
                printf("\n");
            } 
    printf("\n");        
        printf("Matrix B \n");
            for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)      
                {
                    printf("%d ",y[i][j]);
                } 
                printf("\n");
            } 
    printf("\n");   

}
   
//3. Write a program in C to find the transpose of a given matrix.
void transpose()
{
    int i,j,a[3][3];
    printf("\nEnter the elements of a matrix ");

    for (i=0;i<3;i++)
        {
            for (j=0;j<3;j++)    scanf("%d",&a[i][j]);
        }
    printf("\nMatrix is \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf(" %d ", a[i][j] );
        }
        printf("\n");
    }  

 
    printf("\nTranspose of Matrix is\n ");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
          
            printf("%d ", a[j][i] );
        }
        printf("\n");
    }  
}

//4. Write a program in C to find the sum of right diagonals of a matrix.
void trace_R()
{
    int i,j,a[3][3];
    printf("\nEnter the matrix element\n");
    for (i=0;i<3;i++)
        {
            for (j=0;j<3;j++)       scanf("%d",&a[i][j]);
        }
  
    printf("\nMatrix is \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf(" %d ", a[i][j] );
        }
        printf("\n");
    }  
    int s=a[0][0];
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if(i=j)
            {
                s=s+a[i][j];
            }
        }
    }    

    printf("Sum of Right Diagonal is %d",s);
    scanf("%d",&i);
}

//5. Write a program in C to find the sum of left diagonals of a matrix.
void trace_L()
{
    int i,j,a[3][3];
    printf("\nEnter the matrix element\n");
    for (i=0;i<3;i++)
        {
            for (j=0;j<3;j++)       scanf("%d",&a[i][j]);
        }
  
    printf("\nMatrix is \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf(" %d ", a[i][j] );
        }
        printf("\n");
    }  
    int s=0;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if(i+j==2)
            {
                s=s+a[i][j];
            }
        }
    }    

    printf("Sum of Left Diagonal is %d",s);
    
}

//6. Write a program in C to find the sum of rows and columns of a Matrix.
void sum_RC()
{
    int i,j,k,a[3][3];
    printf("\nEnter the matrix element\n");
    for (i=0;i<3;i++)
        {
            for (j=0;j<3;j++)       scanf("%d",&a[i][j]);
        }
  
    printf("\nMatrix is \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf(" %d ", a[i][j] );
        }
        printf("\n");
    }  

    int s = 0;

    for (i=0;i<3;i++)
    {   
        s=0;
        for(j=0;j<3;j++)
        {
            s=s+a[i][j];
        }
        printf("\nSum of Row %d is %d",i+1,s);
    }

    for (i=0;i<3;i++)
    {   
        s=0;
        for(j=0;j<3;j++)
        {
            s=s+a[j][i];
        }
        printf("\nSum of Column %d is %d",i+1,s);
    }
}

//7. Write a program in C to print or display the lower triangular of a given matrix.
void LowM()
{
    int i,j,k,a[3][3];
    printf("\nEnter the matrix element\n");
    for (i=0;i<3;i++)
        {
            for (j=0;j<3;j++)       scanf("%d",&a[i][j]);
        }
  
    printf("\nMatrix is \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf(" %d ", a[i][j] );
        }
        printf("\n");
    }  

    printf("Lower Triangular Matrix is \n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            if(j>i) 
            {
                printf(" %d ",a[i][j]);
            }

        }
        printf("\n   ");
    } 
}
//8. Write a program in C to print or display an upper triangular matrix.
void UppM()
{
int i,j,k,a[3][3];
    printf("\nEnter the matrix element\n");
    for (i=0;i<3;i++)
        {
            for (j=0;j<3;j++)       scanf("%d",&a[i][j]);
        }
  
    printf("\nMatrix is \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf(" %d ", a[i][j] );
        }
        printf("\n");
    }  

    printf("Upper Triangular Matrix is \n");
    for (i=1;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            if(i>j) 
            {
                printf(" %d ",a[i][j]);
            }

        }
        printf("\n");
    }
}
//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.

//10. Write a program in C to find the row with maximum number of 1s.
void min_1()
{
    int i,j,k,a[3][3];
    printf("\nEnter the matrix element\n");
    for (i=0;i<3;i++)
        {
            for (j=0;j<3;j++)       scanf("%d",&a[i][j]);
        }
  
    printf("\nMatrix is \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf(" %d ", a[i][j] );
        }
        printf("\n");
    } 
    int r=0,count=0,m_count=0;
/*    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if(a[i][j]==1)
                count++;
        }
        if(count>m_count)
        {
            m_count=count;
            r=i;
        }
    } 
    
    printf("\n Row with minimum no of 1 is %d ",i);
    */
}