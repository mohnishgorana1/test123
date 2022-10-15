#include<iostream>
using namespace std;

class Complex 
{
    private:
        int real,img;
    public:
    Complex(int r=0,int i=0)
        {
            real=r;
            img=i;
        }
    void print()
        {
            cout<<endl<<real<<" + "<<img<<"i";
        }
    Complex operator + (Complex C)
    {
        Complex temp;

        temp.real = real + C.real;
        temp.img  = img  + C.img;

        return temp;
    }

    Complex operator - (Complex C)
    {   
        Complex temp;
        temp.real = real - C.real;
        temp.img  = img  - C.img;

        return temp;

    }

    Complex operator * (Complex C)
    {   
        Complex temp;
        temp.real = real * C.real;
        temp.img  = img  * C.img;

        return temp;

    }

   void operator  == (Complex Y)
    {   
        Complex X;
        if(X.real == Y.real  && X.img == Y.img)
        {
            cout<<endl<<"Equal";
        } 
        else
        {   
            cout<<endl<<"Not equal";
        }

    }

            
    Complex operator ++ ()                 //Pre increment 
        {   
            Complex temp;
            temp.real = ++real;
            temp.img = ++img;
            return temp;
        } 
    Complex operator ++ (int dummy)        //Post increment 
        {   
            Complex temp;
            temp.real = real++;
            temp.img = img++;

            return temp;
        } 
    Complex operator -- ()                 //Pre decrement 
        {   
            Complex temp;
            temp.real = --real;
            temp.img = --img;
            return temp;
        } 
    Complex operator -- (int dummy)        //Post decrement  
        {   
            Complex temp;
            temp.real = real--;
            temp.img = img--;

            return temp;
        } 

    friend void add(Complex,Complex);

};

class Time
{   
    private:
        int h,m,s;
    public:
        Time ()                             //Default constructor
        {
            h=0;
            m=0;
            s=0;
        }
        Time(int hr,int min,int sec)        // Constructor
        {   
            h=hr;     m=min;    s=sec;
        }

        int operator == (Time t)
        {
            Time temp;

            if (temp.h == t.h)
            {
                if(temp.m == t.m)
                {
                    if ( temp.s == t.s) 
                    {
                        return 1;
                    }
                }
            }
            else 
            {
                return 0;
            }
                
        }

friend istream & operator >> (istream &is, Time &t);
friend ostream & operator << (ostream &os, const Time &t);

};
istream & operator >> (istream &in, Time &t)
{   
    cout<<"Enter the time hr,min,sec "<<endl;
    in>>t.h;
    in>>t.m;
    in>>t.s;
    return in;
    
   
}
ostream & operator << (ostream &os, const Time &t)
{   
    cout<<"Hour :"; os << t.h;  cout<<endl;
    cout<<"min :"; os << t.m;   cout<<endl;
    cout<<"sec :"; os << t.s;   cout<<endl;
    cout<<endl;
    return os;
}

class Numbers
{
private:
    int N;
public:
    Numbers(int x)
    {
        N=x;
    }

   void operator - ()
    {
    
        cout<<endl<<"Negative is "<<-N;
    }
};

class Matrix
{
    private:
        int a[3][3];
        int i,j;
    public:
        Matrix()                //constructor for matrix initial.
        {  
            for(i=0;i<3;i++)
                {   
                    for(j=0;j<3;j++)
                        {
                            a[i][j] = 0;
                        }
                    
                }
        }
        Matrix init()
        {
        cout<<"Enter the value for matrix "<<endl;
            for(i=0;i<3;i++)
                {   
                    for(j=0;j<3;j++)
                        {
                        cin>>a[i][j];
                        }
                    
                }

            
        }
    
    void print()
    {
        for( i=0;i<3;i++)
            {   
                for(j=0;j<3;j++)
                {
                    cout<<" "<<a[i][j];
                }
                cout<<endl;

            }

    }
    Matrix operator - ()
    {   
        Matrix temp[3][3];
        for(i=0;i<3;i++)
            {   
                for(j=0;j<3;j++)
                {
                    temp[i][j] = -temp[i][j];
                }
            }

    }
    Matrix operator + (Matrix m)
    {
        Matrix temp;
        for(i=0;i<3;i++)
            {   
                for(j=0;j<3;j++)
                {
                    temp.a[i][j] = a[i][j] + m.a[i][j];     //here a[][] is of matrix M1
                   
                }       
            }
        return temp;
    }

    // ASSIGNMENT OPERATOR copy const
    Matrix (const Matrix &m )
    {   
        for(i=0;i<3;i++)
            {   
                for(j=0;j<3;j++)
                {
                   a[i][j] = m.a[i][j];
                                  
                }       
            }

                
    }


};







void add(Complex X,Complex Y)
{   
    (X+Y).print();

}


int main()
{   
    /*
    Complex c1(3,4),c2(4,5),c3,c4,c5,c6(1,1),c7(1,1);

    c3=c1+c2;       c3.print();
    c4=c3-c1;       c4.print();
    c5=c1*c2;       c5.print();
    c6==c7;

    Complex X(6,8) , Y(4,4);
    (++X).print();   (X++).print();  X.print();
    cout<<endl;
    (--Y).print();   (Y--).print();  Y.print();

    Complex A(3,4),B(5,6);
    add(A,B);

    Numbers N1(5);
    -N1;

   

    Matrix M1;
    M1.print();
    cout<<endl;
    (-M1).print();;
    cout<<endl;

    
    Time t1,t2;
    cin>>t1;
    cin>>t2;
    cout<<"First time is "<<endl;
    cout<<t1;
    cout<<"Second time is "<<endl;
    cout<<t2;
        if(t1 == t2)
        {
            cout<<endl<<"Times are equal"<<endl;
        }
        else 
        {
            cout<<endl<<"Times are not equal"<<endl;
        }

    Matrix M1,M2;
    M1.init();  M1.print();
    M2.init();  M2.print();
    
    Matrix M3 = M1 + M2;       M3.print();



   
    */
   

   




    return 0;
}


