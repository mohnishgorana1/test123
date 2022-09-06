//                          Basics of C++

#include<iostream>
using namespace std;
int main()
{


//1. Write a C++ program to print Mohnish on the screen.
    cout<<"Mohnish"<<endl;
//2. Write a C++ program to print Hello on the first line and MySirG on the second line using endl.
    cout<<"Hello"<< endl << "Mohnish";    
//3. Write a C++ program to calculate the sum of two numbers.
    int a,b;
    cout<<"\nEnter two numbers ";
    cin>>a>>b;
    cout<<"Sum is "<<a+b;
//4. Write a C++ program to calculate the area of a circle
    cout<<endl<<"Enter the radius\n";
    cin>>a;
    cout<<"Area of circle is "<<3.14*a*a;

//5. Write a C++ program to calculate the volume of a cuboid.
    int l,w,h;
    cout<<endl<<"Enter the length, width, height of cuboid \n";
    cin>>l>>w>>h;
    cout<<"Vulumne of cuboid is "<<l*w*h;

//6. Write a C++ program to calculate an average of 3 numbers.
    cout<<endl<<"Enter three numbers ";
    cin>>l>>w>>h;
    cout<<endl<<"Average is "<<(l+w+h)/3;

//7. Write a C++ program to calculate the square of a number
    cout<<endl<<"Enter a numbers ";
    cin>>a;
    cout<<endl<<"Square is "<<a*a;
//8. Write a C++ program to swap values of two int variables without using third variable
    cout<<endl<<"Enter two  numbers ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After Swap "<<a<<endl<<b;

    //9. Write a C++ program to find the maximum of two numbers.
    cout<<endl<<"Enter two  numbers "<<endl;
    cin>>a>>b;
    if(a>b)     cout<<"Maximum is "<<a;
    if(b>a)     cout<<"Maximum is "<<b;
    else        cout<<"Numbers are equal";*/
//10. Write a C++ program to add all the numbers of an array of size 10.
    int arr[10],i;
    cout<<endl<<"Enter 10 number is array "<<endl;
    for(i=0;i<10;i++)
        cin>>arr[i]; 
    for(i=0;i<10;i++)
        cout<<" "<<arr[i];

    return 0;
}

