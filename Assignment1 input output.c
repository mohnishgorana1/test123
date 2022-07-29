#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{

//print hello students
    printf("Hello Students \n\n ");

//print hello and students on next line
    printf("Hello \n Students\n \n") ;

    printf(" \"MYSIRG\" " );

// now area of circle//

    int R;
    float A;
    printf(" \n Enter the radius of the circle ");
    scanf("%d",&R);
    A=3.14*R*R;
    printf("AREA of the circle is %f ",A);

// length of string

    char string[]="Mohnish";
    printf("\n Our String is %s" ,string);
    printf("\n Length of String is %ld" ,strlen(string));

// Name of the user in double quotes
    char name[10];
    printf("\n Enter user name :");
    scanf("%s",&name);
    printf("Your name in double quotes is \" Hello, %s\" " ,name);

// print %d on screen
    printf(" \n %%d");

//print /n on screen
    printf("\n \\n \n");
//print // on screen
    printf("\\\\");

//print date in given format

int D,M,Y;
    printf("Enter the date in \"DD-MM-YYYY\" format ");
    scanf("%d%d%d",&D,&M,&Y);
    printf("Day-%d ,Month%d ,Year%d",D,M,Y);
    

//hour and minute format print

    int h,m;
    printf("Enter the hour and minute in \"HH:MM\" ");
    scanf("%d %d" ,&h,&m);
    printf("%d Hour and %d Minute",h,m);
// output of given program is 



    return 0;
}