#include<iostream>
using namespace std;
class complex
{
    int a,b,sum,pro;
    float x,y;
    
public:

    float real;
    float img;
    
    complex(){}
    friend istream &operator>>(istream&in,complex&C);
    friend ostream &operator<<(ostream&out,complex&C);
    
    complex(float real,float img)
    {
        x=real;
        y=img;
    }
    
    complex operator +(complex&);
    complex operator *(complex&);
    complex operator -(complex&);
    void display();
};

    complex complex::operator +(complex& C)
    {
        complex result;
        result.x=x+C.x;
        result.y=y+C.y;
        return result;
    }
    
    complex complex::operator -(complex& C)
    {
        complex result;
        result.x=x-C.x;
        result.y=y-C.y;
        return result;
    }
    
    complex complex::operator *(complex& C)
    {
        complex result;
        result.x=x*C.x-y*C.y;
        result.y=x*C.y+y*C.x;
        return result;
    }
    
    istream& operator >>(istream& in,complex& C)
    {
        cout<<"ENTER REAL AND IMAGINARY PARTS OF COMPLEX NUMBER:"<<endl;
        in>>C.real>>C.img;
        return in;
    }
    
    ostream& operator <<(ostream& out,complex& C)
    {
        out<<"COMPLEX NUMBER IS:"<<endl;
        out<<"("<<C.real<<")"<<"+"<<"("<<C.img<<")i"<<endl;
        return out;
    }
    
    void complex::display()
    {
        if(y>0)
            {
                cout<<"("<<x<<")"<<"+i"<<"("<<y<<")"<<endl;
            }
        else
            {
                cout<<"("<<x<<")"<<"-i"<<"("<<y<<")"<<endl;
            }
    }
    
    int main()
    {
        
        float x1,x2,y1,y2;
        complex C1,C2,C3,C4,C5;
        cout<<"ENTER REAL AND IMAGINARY PART OF FIRST COMPLEX NUMBER:"<<endl;
        cin>>x1>>y1;
        cout<<"ENTER REAL AND IMAGINARY PART OF SECOND COMPLEX NUMBER:"<<endl;
        cin>>x2>>y2;
        C1=complex(x1,y1);
        C2=complex(x2,y2);
        C3=C1+C2;
        cout<<"THE SUM OF THE TWO COMPLEX NUMBERS IS:"<<endl;
        C3.display();
        C4=C1-C2;
        cout<<"THE DIFFERENCE OF THE TWO COMPLEX NUMBERS IS:"<<endl;
        C4.display();
        C5=C1*C2;
        cout<<"THE PRODUCT OF THE TWO COMPLEX NUMBERS IS:"<<endl;
        C5.display();
        
        cout<<"FRIEND FUNCTION:"<<endl<<endl<<endl;
        complex C6,C7,C8;
        cin>>C6;
        cout<<C6;
        cin>>C7;
        cout<<C7;
        C8=C6+C7;
        cout<<C8;
        
        return 0;
    }
    
    
   /*
    
          ENTER REAL AND IMAGINARY PART OF FIRST COMPLEX NUMBER:
         2
         3
         ENTER REAL AND IMAGINARY PART OF SECOND COMPLEX NUMBER:
         5
         6
         THE SUM OF THE TWO COMPLEX NUMBERS IS:
         (7)+i(9)
         THE DIFFERENCE OF THE TWO COMPLEX NUMBERS IS:
         (-3)-i(-3)
         THE PRODUCT OF THE TWO COMPLEX NUMBERS IS:
         (-8)+i(27)
         FRIEND FUNCTION:


         ENTER REAL AND IMAGINARY PARTS OF COMPLEX NUMBER:
         2
         3
         COMPLEX NUMBER IS:
         (2)+(3)i
         ENTER REAL AND IMAGINARY PARTS OF COMPLEX NUMBER:
         5
         6
         COMPLEX NUMBER IS:
         (5)+(6)i
         COMPLEX NUMBER IS:
         (-3.23169e+12)+(-2.97957e-06)i

             
    */
    
