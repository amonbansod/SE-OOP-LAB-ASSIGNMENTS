#include<iostream>
using namespace std;

class CppArray
{
    int n,cp[20];
    
public:
    
    friend istream& operator >>(istream& in,CppArray& c);
    friend ostream& operator <<(ostream& out,CppArray& c);
    void operator =(CppArray &c);
    int size();
    int &operator [](int subscript);
};

istream& operator >>(istream &in,CppArray &c)
{
   cout<<"ENTER THE SIZE OF THE ARRAY: ";
    in>>c.n;
   
   cout<<"ENTER ELEMENTS:"<<endl;
    for(int i=0;i<c.n;i++)
    {
        in>>c.cp[i];
    }
    
    
}

ostream& operator <<(ostream &out,CppArray &c)
{
    cout<<"THE ARRAY IS:"<<endl<<endl;
    for(int i=0;i<c.n;i++)
   
    {
        cout<<"\t";
        cout<<c.cp[i];
    }
    
    cout<<endl<<endl;
}

int CppArray::size()
{
   return n;
}

void CppArray::operator =(CppArray &c)
{
   if(n==c.n)
   {
      for(int i=0;i<c.n;i++)
      {
         cp[i]=c.cp[i];
      }
   }
   else
   {
      cout<<"COPYING OF ARRAY IS NOT POSSIBLE!!!  :( :( "<<endl;
   }
   
   cout<<endl<<endl;
}


int &CppArray::operator [](int subscript)
{
   if(subscript>n)
   {
      cout<<"ERROR: OUT OF RANGE!!"<<endl;
      return cp[n-1];
   }
   else if(subscript<0)
   {
      cout<<"ERROR: INDEX SHOULD BE +ve VALUE!!"<<endl;
      return cp[0];
   }
   else
   {
      return cp[subscript];
   }
}

int main()
{
   CppArray c1,c2;
   
   cout<<" ARRAY 1:"<<endl;
   cin>>c1;
   cout<<c1;
   cout<<endl;
  
  cout<<" ARRAY 2:"<<endl;
   cin>>c2;
   cout<<c2;
   cout<<endl;
   
   int ch;
   do
   {
      cout<<"1] COPY ELEMENTS OF ARRAY 2 IN ARRAY 1."<<endl<<"2] COPY ELEMENTS OF ARRAY 1 IN 2."<<endl<<"3] SIZE OF ARRAY 1."<<endl<<"4] SIZE OF ARRAY 2."<<endl<<"5] UPDATE ELEMENTS IN ARRAY 1."<<endl<<"6] UPDATE ELEMENTS OF ARRAY 2."<<endl<<"7] EXIT."<<endl;
      
      
      cout<<endl<<endl;
      cout<<"ENTER YOUR CHOICE!:"<<endl;
   
      cin>>ch;
      switch(ch)
      {
         case 1:
                  cout<<"ASSINGING ELEMENTS OF ARRAY 2  TO ARRAY 1!"<<endl<<endl;
                  c1=c2;
   
                  cout<<"ARRAY 2 ASSINNED TO ARRAY 1:  "<<endl;
                  cout<<c1;
                  break;
               
         case 2: 
                  cout<<"ASSINGING ELEMENTS OF ARRAY 1  TO ARRAY 2!"<<endl<<endl;
                  c2=c1;
   
                  cout<<"ARRAY 1 ASSINNED TO ARRAY 2:  "<<endl;
                  cout<<c2;
                  break;
                  
               
         case 3:
                  cout<<"SIZE OF ARRAY 1:"<<c1.size()<<endl;
                  break;
                  
         
         case 4:
                  cout<<"SIZE OF ARRAY 2:"<<c2.size()<<endl;
                  break;
                  
         case 5:
        
                  cout<<"UPDATE ELEMENTS IN ARRAY 1!!!"<<endl;
                  int key,pos;
                  
                  cout<<"ENTER THE POSITION ON WHICH YOU WANT TO ENTER ELEMENT:"<<endl;
                  cin>>pos;
                  
                  cout<<"ENTER THE VALUE TO BE SUBSTITUTED:"<<endl;
                  cin>>key;
                  
                  c1[pos]=key;
                  
                  cout<<"ARRAY AFTER REPLACING THE VALUE:  "<<c1;
                  cout<<endl;
                  break;
                 
                 
         case 6:
                  cout<<"UPDATE ELEMENTS IN ARRAY 2!"<<endl<<endl;
                  
                  
                  cout<<"ENTER THE POSITION ON WHICH YOU WANT TO ENTER ELEMENT:"<<endl;
                  cin>>pos;
                  
                  cout<<"ENTER THE VALUE TO BE SUBSTITUTED:"<<endl;
                  cin>>key;
                  
                  c2[pos]=key;
                  
                  cout<<"ARRAY AFTER REPLACING THE VALUE:  "<<c2;
                  cout<<endl;
                  break;
      }
      cout<<endl<<endl;
 }while(ch!=7);
 
               
   return 0;
}


/*

ARRAY 1:
ENTER THE SIZE OF THE ARRAY: 3
ENTER ELEMENTS:
1
2
3
THE ARRAY IS:

	1	2	3


 ARRAY 2:
ENTER THE SIZE OF THE ARRAY: 3
ENTER ELEMENTS:
4
5
6
THE ARRAY IS:

	4	5	6


1] COPY ELEMENTS OF ARRAY 2 IN ARRAY 1.
2] COPY ELEMENTS OF ARRAY 1 IN 2.
3] SIZE OF ARRAY 1.
4] SIZE OF ARRAY 2.
5] UPDATE ELEMENTS IN ARRAY 1.
6] UPDATE ELEMENTS OF ARRAY 2.
7] EXIT.


ENTER YOUR CHOICE!:
1
ASSINGING ELEMENTS OF ARRAY 2  TO ARRAY 1!



ARRAY 2 ASSINNED TO ARRAY 1:  
THE ARRAY IS:

	4	5	6



1] COPY ELEMENTS OF ARRAY 2 IN ARRAY 1.
2] COPY ELEMENTS OF ARRAY 1 IN 2.
3] SIZE OF ARRAY 1.
4] SIZE OF ARRAY 2.
5] UPDATE ELEMENTS IN ARRAY 1.
6] UPDATE ELEMENTS OF ARRAY 2.
7] EXIT.


ENTER YOUR CHOICE!:
2
ASSINGING ELEMENTS OF ARRAY 1  TO ARRAY 2!



ARRAY 1 ASSINNED TO ARRAY 2:  
THE ARRAY IS:

	4	5	6



1] COPY ELEMENTS OF ARRAY 2 IN ARRAY 1.
2] COPY ELEMENTS OF ARRAY 1 IN 2.
3] SIZE OF ARRAY 1.
4] SIZE OF ARRAY 2.
5] UPDATE ELEMENTS IN ARRAY 1.
6] UPDATE ELEMENTS OF ARRAY 2.
7] EXIT.


ENTER YOUR CHOICE!:
3
SIZE OF ARRAY 1:3


1] COPY ELEMENTS OF ARRAY 2 IN ARRAY 1.
2] COPY ELEMENTS OF ARRAY 1 IN 2.
3] SIZE OF ARRAY 1.
4] SIZE OF ARRAY 2.
5] UPDATE ELEMENTS IN ARRAY 1.
6] UPDATE ELEMENTS OF ARRAY 2.
7] EXIT.


ENTER YOUR CHOICE!:
4
SIZE OF ARRAY 2:3


1] COPY ELEMENTS OF ARRAY 2 IN ARRAY 1.
2] COPY ELEMENTS OF ARRAY 1 IN 2.
3] SIZE OF ARRAY 1.
4] SIZE OF ARRAY 2.
5] UPDATE ELEMENTS IN ARRAY 1.
6] UPDATE ELEMENTS OF ARRAY 2.
7] EXIT.


ENTER YOUR CHOICE!:
5
UPDATE ELEMENTS IN ARRAY 1!!!
ENTER THE POSITION ON WHICH YOU WANT TO ENTER ELEMENT:
2
ENTER THE VALUE TO BE SUBSTITUTED:
9
ARRAY AFTER REPLACING THE VALUE:  THE ARRAY IS:

	4	5	9




1] COPY ELEMENTS OF ARRAY 2 IN ARRAY 1.
2] COPY ELEMENTS OF ARRAY 1 IN 2.
3] SIZE OF ARRAY 1.
4] SIZE OF ARRAY 2.
5] UPDATE ELEMENTS IN ARRAY 1.
6] UPDATE ELEMENTS OF ARRAY 2.
7] EXIT.


ENTER YOUR CHOICE!:
6
UPDATE ELEMENTS IN ARRAY 2!

ENTER THE POSITION ON WHICH YOU WANT TO ENTER ELEMENT:
1
ENTER THE VALUE TO BE SUBSTITUTED:
88
ARRAY AFTER REPLACING THE VALUE:  THE ARRAY IS:

	4	88	6




1] COPY ELEMENTS OF ARRAY 2 IN ARRAY 1.
2] COPY ELEMENTS OF ARRAY 1 IN 2.
3] SIZE OF ARRAY 1.
4] SIZE OF ARRAY 2.
5] UPDATE ELEMENTS IN ARRAY 1.
6] UPDATE ELEMENTS OF ARRAY 2.
7] EXIT.


ENTER YOUR CHOICE!:
7


*/


    
    
